#include<iostream>
#include<cmath>
struct x
{
    int c,n;
};
using namespace std;
int main()
{
   long int t;
   int i,j,k;
   cin>>t;
   x* arr=new x[t];
   for(i=0; i<t; i++)
   {
       cin>>arr[i].c>>arr[i].n;
   }
   for(i=0; i<t; i++)
   {
       int no_cells=1,total_cells=0;
       for(j=1; j<=arr[i].n; j++)
       {
           no_cells=1;
           for(k=0; k<j; k++)
                no_cells+=6*k;
           total_cells+=no_cells;
       }
       cout<<arr[i].c*total_cells<<endl;
   }
   return 0;
}
