#include<iostream.h>
#include<process.h>

int q[5];
int front;
int rear=front=-1;

void insert(int Q[],int val)
{
  if(rear==4)
  {
    cout<<"OVERFLOW!!!!";
    exit(0);
  }

  else if(rear==-1)
  {
    front=rear=0;
    Q[rear]=val;
    cout<<"\nItem added";
  }

}

void deletion(int Q[])
{
  if(front==-1)
  {
    cout<<"UNDERFLOW!!!!";
    exit(0);
  }

  else
  {
    cout<<"\nData to be deleted is "<<Q[front];
    if(front==rear)
    {
      front=rear=-1;
    }
    else
    {
      front++;
    }
  }
}

void main()
{
  int val;
  int ch;
  char ans='y';

  while(ans=='y')
  {
    cout<<"\n\n\n****MAIN MENU****";
    cout<<"\n\n1.Insert to queue ";
    cout<<"\n\n2.Delete from queue ";
    cout<<"\n\n3.Exit ";

    cout<<"\n\n\nEnter your choice ";
    cin>>ch;

    switch(ch)
    {
      case 1: cout<<"\nEnter the value";
	      cin>>val;

	      insert(q,val);
	      break;

      case 2: deletion(q);
	      break;

      case 3: exit(0);

    }

    cout<<"\n\nWish to enter more ";
    cin>>ans;

  }
}
