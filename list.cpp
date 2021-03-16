#include<iostream>
using namespace std;
	class node
	{
		public:
		int key;
		node* next;
		node(int n)	{next=NULL; key=n;}
		void ninput()	{cin>>key;}
		void ndisp()	{cout<<key<<endl;}
	};
class list
{
node* first; 
public:
	int n;
	list()	{first=NULL;}
	void insertatfront()
	{
		cin>>t;
		node* e=new node(t);
		if(first==NULL);
		{
			first=e;
		}
		else
		{
			*e.next=first;
			first=e;
		}
	}
	void insertati(int in)
	{
		if((i<0)||(i>n))
			cout<<"INDEX UNAVAILABLE\n";
		else
		{
			if((first==NULL)||(i==0))
				insertatfront();
			else
			{
				cin>>t; node* e=new node(t);
				node* p=first; node* n=(*p).next; int i=1;
				while(i!=in)
				{
					p=n;
					n=(*n).next;
					i++;
				}
				p->next=e;
				e->next=n;
			}
		}
	}
	void deleteati(int in)
	{
		if(first==NULL||i>=n)
			cout<<"arr empty\n";
		else
		{
			if(n==1)
			{
				*first.ndisp(); cout<<"BEING DELETED\n";
				delete(first);
				first=NULL;
			}
			else
			{
			if(i==0)
			{
				*first.ndisp(); cout<<"BEING DELETED\n";
				node*t=first; delete(t);
				first=first->next;
			}
			else
			{
				node* p=first; node* e=first->next; node*n=e->next; int i=1;
				while(i!=in)
				{
					p=e;
					e=n;
					n=n->next;
				}
				*e.ndisp(); cout<<"BEING DELETED\n";
				delete(e);
				p.next=n;
			}}
		}
	}
	void display()
	{
		node *t=first;
		while(t!=NULL)
		{
			*t.ndisp();
			t=t->next;
		}
	}
	void reversal()
	{
		node *a=NULL, *b=first, *c=b->next;
		while(c!=NULL)
		{
			b->next=a;
			a=b; b=c; c=b.next;
		}
		first=b;
	}

}