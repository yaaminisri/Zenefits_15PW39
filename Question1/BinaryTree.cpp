#include<iostream>
#define maxcapacity 100
using namespace std;

struct binarytreenode
{
	int data;
	struct binarytreenode *lchild;
	struct binarytreenode *rchild;
};
class binarytree
{
	struct binarytreenode *root;
	public:
	binarytree(){
			root=NULL;
		}
    void createbinarytree()
   {
            struct binarytreenode *queue[30],*t;
            int front=-1,rear=-1,option;
            struct binarytreenode *newbinarynode;
            newbinarynode= new binarytreenode;
            cout<<"\nEnter the data:";
            cin>>newbinarynode->data;
            front=0;
            rear=0;
            queue[rear]=newbinarynode;
            root=newbinarynode;
            while(front!=-1)
            {
                t=queue[front];
                if(front==rear)
                {
                        front=rear=-1;
                }
                else
                {
                    if(front == (maxcapacity-1))
                        front=0;
                    else
                        front=front+1;
                }
                 cout<<"How many children for the node"<<t->data;
                 cout<<"\n1.Left child only";
                 cout<<"\n2.Right child only";
                 cout<<"\n3.Inoder Traversal";
                 cin>>option;
                switch (option)
                {
                    case 1:
                        newbinarynode= new binarytreenode;
                        cout<<"\nEnter the data";
                        cin>>newbinarynode->data;
                        if(rear==-1)
                        {
                            front=rear=0;
                        }
                        else if(rear == maxcapacity-1)
                        {
                        rear=0;
                        }
                        else
                        rear=rear+1;
                        t->lchild=newbinarynode;
                        queue[rear]=newbinarynode;
                        t->rchild=NULL;
                        break;

                    case 2:
                        newbinarynode= new binarytreenode;
                        cout<<"\nEnter the data";
                        cin>>newbinarynode->data;
                        if(rear==-1)
                        {
                            front=rear=0;
                        }
                        else if(rear==maxcapacity-1)
                        {
                        rear=0;
                        }
                        else
                        rear=rear+1;
                        t->rchild=newbinarynode;
                        queue[rear]=newbinarynode;
                        t->lchild=NULL;
                        break;

                   case 3:
                         display();

                     default:
                     cout<<"\nEnter a valid choice";
                }
              }
};
void inorder(binarytreenode *t)
{
	if(t!=NULL)
	{
		inorder(t->lchild);
		cout<<t->data;
		inorder(t->rchild);
	}
}
void display()
{
	inorder(root);
}
};
int main()
{

    binarytree bt;
    bt.createbinarytree();


}
