#include<stdio.h>
int main()
{
	int a[3],i,n,n2,x;
	scanf("%d",&n);
	int *t=malloc(sizeof(int)*n);
	int** ptr;
	struct shelf *ptr=st;
	scanf("%d",&n2);
	for(i=0; i<n2; i++)
	{
		scanf("%d%d",&a[0],&a[1]);
		if(n>=a[1])
		{
		ptr+=a[1];
		switch(a[0])
		{
			case 1:	scanf("%d",&a[2]);
					struct book* p=malloc(sizeof(struct book));
					(*p).next=NULL;
					(*p).pages=a[2];
					if((*ptr).first==NULL)
						(*ptr).first=p;
					else
						(*ptr).last->next=p;
					(*ptr).last=p;
					(*ptr).no_of_books++;
					ptr=st;
					break;
			case 2:	scanf("%d",&a[2]);
					struct book* t=((*ptr).first);
					x=0;
					while((x<a[2])&&(x<(*ptr).no_of_books))
					{	t=t->next; x++;}
					printf("%d\n",t->pages);
					ptr=st;
					break;
			case 3:	printf("%d",(*ptr).no_of_books);
					ptr=st;
					break;
		}
		}
	}
}
