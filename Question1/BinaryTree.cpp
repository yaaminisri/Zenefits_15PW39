#include<iostream>
#include<stdlib.h>
#define maxcapacity 100
using namespace std;

struct Node
{
	int data;
	struct Node *lchild;
	struct Node *rchild;
};
class binarytree
{
	struct Node *root;
	public:
	binarytree(){
			root=NULL;
		}
    void createbinarytree()
   {
            struct Node *queue[30],*temp;
            int front=-1,rear=-1,option;
            struct Node *newbinarynode;
            newbinarynode= new Node;

            cout<<"         Binary Tree !!\n";
            cout<<"\nData:";
            cin>>newbinarynode->data;
            front=0;
            rear=0;
            queue[rear]=newbinarynode;
            root=newbinarynode;
            while(front!=-1)
            {
                temp=queue[front];
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
                 cout<<"Node:"<<temp->data;
                 cout<<"\n";
                 cout<<"\n1.Left child ";
                 cout<<"\n2.Right child ";
                 cout<<"\n3.Inoder Traversal ";
                 cout<<"\n4.Both leaf Nodes ";
                 cin>>option;
                switch (option)
                {
                    case 1:
                        newbinarynode= new Node;
                        cout<<"\nData:";
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
                        temp->lchild=newbinarynode;
                        queue[rear]=newbinarynode;
                        temp->rchild=NULL;
                        break;

                    case 2:
                        newbinarynode= new Node;
                        cout<<"\nData:";
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
                        temp->rchild=newbinarynode;
                        queue[rear]=newbinarynode;
                        temp->lchild=NULL;
                        break;

                   case 3:
                         display();
                         break;

                    case 4:
                          temp->lchild=NULL;
                          temp->rchild=NULL;
                          break;
                     default:
                     cout<<"\nInvalid choice";
                }
              }
};
void inorder(Node *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		cout<<temp->data;
		inorder(temp->rchild);
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
