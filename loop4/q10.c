//find the lcm and hcf of two number
/*
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int hcf;
	int lcm;
	int n;
	while (a>b)
	{
		n=b;
	if(a%n==0)
	{
		if(b%n==0)
		{
			hcf=n;
			lcm=(a*b)/hcf;
			printf("%d %d",hcf,lcm);
		}
		else
		{	n=n-1;
		}
			}else 
	      		{	n=n-1;
			}
	return 0;
}*/

#include<stdio.h>
int main()
{
int a,b,n,hcf,lcm;
scanf("%d %d",&a,&b);
if(a>b)
{
 n=b;
}
else
{
n=a;
}
while(n>0)
{
if(a%n==0 && b%n==0)
{
hcf=n;
lcm=(a*b)/hcf;
printf("hcf is: %d and lcm is:%d",hcf,lcm);
break;
}
n--;
}
return 0;
}


