#include<stdio.h>
#include<math.h>

unsigned long long int add(unsigned long long int x,unsigned long long int y)
{
unsigned long long int sum=0;

while(y--)
sum+=x;

return sum;

}

void divide(unsigned long long int num, unsigned long long int *a, unsigned long long int *b)
{
int n,po;
n=(int)log10(num)+1;
po=(int)pow(10,n/2);

if(n==0)return;

*a=num/po;
*b=num-(*a*po);

return;
}

unsigned long long int multiply( unsigned long long int x, unsigned long long int y)
{
unsigned long long int al,ar,bl,br;
unsigned long long int albl,arbr,albr,arbl,res;
int n;

n=(int)log10(x)+1;

if(((int)log10(x)+1==1) || ((int)log10(y)+1))return add(x,y);

al=ar=bl=br=0;
albl=arbr=albr=arbl=res=0;

divide(x,&al,&ar);
divide(y,&bl,&br);

albl=multiply(al,bl);
arbr=multiply(ar,br);
albr=multiply(al,br);
arbl=multiply(ar,bl);

res=(albl*pow(10,n))+(albr*pow(10,n/2))+(arbl*pow(10,n/2))+arbr;

return res;
}

int main()
{

unsigned long long int a=0;
unsigned long long int b=0;
ab:
printf("\n\n ENTER FIRST NUMBER : ");
scanf("%llu",&a);

printf("\n\n ENTER SECOND NUMBER : ");
scanf("%llu",&b);

printf("\n\n %llu * %llu = %llu\n",a,b,multiply(a,b));

return 0;
}
