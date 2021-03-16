#include<iostream>
using namespace std;
int main()
{
	int l[100],x[100];
	int n,i;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>l[i];
		x[i]=l[i];
	}
	int test=0,min=0,o=0,j;
	for(int u=0; u<n; u++)
	{
		i=u;
		for(; i<n; i++)
		{
			while(x[i]==-1)
				i++;
			if(i<n)
			{
				int p=x[i];
				x[i]=-1;
				for(j=0; j<n; j++)
				{
					if(((j>i)&&(x[j]<p))||(j<i)&&(x[j]>p))
					{
						x[j]=-1;
						
					}
				}
				test++;
			}
		}
		if(u==0)
			min=test;
		else
		{
			if(test<min)
				min=test;
		}
	}
	cout<<min<<endl;
	return 0;

}