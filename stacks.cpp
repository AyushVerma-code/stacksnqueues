#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stddef.h>

struct stack
{
  int info;
  stack *ptr;
};

stack *top;

void push()
{
  stack *t;
  if(top==NULL)
  {
    t=new stack;
    if(t==NULL)
    {
      cout<<"***Overflow in Stack***";
      getch();
      exit(0);
    }

    cout<<"\nEnter the info ";
    cin>>t->info;
    t->ptr=NULL;
    top=t;
  }

  else
  {
    t=new stack;
    if(t==NULL)
    {
      cout<<"***Overflow in Stack***";
      getch();
      exit(0);
    }

    cout<<"\nEnter info";
    cin>>t->info;
    t->ptr=top;
    top=t;
  }

  cout<<"\n\nItem Inserted ";
  getch();
}

void pop()
{
  stack *t;
  if(top==NULL)
  {
    cout<<"***Underflow in Stack***";
    getch();
    exit(0);
  }

  t=top->ptr;
  cout<<"\nItem Deleted "<<top->info;
  top->ptr=NULL;
  delete top;
  top=t;
  getch();
}

void list()
{
  if(top==NULL)
  {
    cout<<"***Underflow in Stack***";
    getch();
    exit(0);
  }

  cout<<"\nStack elements are : \n";
  for(stack *t=top;t!=NULL;t=t->ptr)
  {
    cout<<t->info<<" ";
  }
  getch();
}

void main()
{
  top=NULL;

  int ch;
  do
  {
    clrscr();
    cout<<"\n\n****MAIN MENU****";
    cout<<"\n\n\n1.Push element in stack ";
    cout<<"\n\n2.Pop element from stack ";
    cout<<"\n\n3.List elements of stack ";
    cout<<"\n\n4.Exit";

    cout<<"\n\n\nEnter your choice....";
    cin>>ch;

    switch(ch)
    {
      case 1: push();
	      break;

      case 2: pop();
	      break;

      case 3: list();
	      break;

      case 4: exit(0);
    }

  }
  while(ch!=4);
}
