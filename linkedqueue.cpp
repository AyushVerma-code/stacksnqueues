#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct node
{
  char name[20];
  int age;
  node *link;
};
class q
{
 node *front,*rear;
 public:
  q(){ front=rear=NULL; }
  void qinsert();
  void qdelete();
  void qdisp()
  {
     node *ptr;
     ptr=front;
     while(front!=NULL)
     {
      cout<<front->name;
      cout<<front->age;
      front=front->link;
     }}
 };
void q::qinsert()
{
 node *ptr;
 ptr=new node;
 ptr->link=NULL;
 cout<<"\nenter name and age for new node";
 gets(ptr->name);
 cout<<"\nenter age";
 cin>>ptr->age;
 if(rear==NULL)
 {front=rear=ptr; }
 else
 {
  rear->link=ptr;
  rear=ptr;;
  }
  }
  void q::qdelete()
  {
  node *ptr;
  if(front==NULL)
  cout<<"\n Underflow";
  else
  {
    ptr=front;
    if(front==rear)
     front=rear=NULL;
     else
     front=front->link;
     delete ptr;
  }
 }
void main()
{
 clrscr();
 q Q;
 char ans='y';
 while(ans=='y')
 {
 Q.qinsert();
 cout<<"\nwish to enter more";
 cin>>ans;
 }
 ans='y';
 while(ans=='y')
 {
 Q.qdelete();
 Q.qdisp();
 cout<<"wish to delete more";
 cin>>ans;
 }
}
