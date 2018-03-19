#include<iostream>
#include<string.h>
using namespace std;

int main(){
     int temp;
     int n;
     cout<<"Dictionary rank of a letters";
     cout<<"Enter the Number:";
     cin>>n;
     string s;
     char str[n];
     cout<<"\nEnter the string:";
     cin>>s;

     for(int i=0;i<n;i++){
         cout<<"\n Enter the characters:";
         cin>>str[i];
     }
    int j;
     for(int i=0;i<n;i++){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
     }
     int a=0;
     int len=strlen(str);
     int  b=len-1;
     while(a<b){
          if(str[a]!=str[b]){
             return 0;
          }
          a++;
          b--;
     }

     for(int i=0;i<n;i++){
         cout<<str[i];
     }

     return 0;

}


