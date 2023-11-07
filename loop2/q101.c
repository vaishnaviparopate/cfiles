//triplet of a,b,c

#include<stdio.h>
int main()
{
	int n,a=1,b,c,ct=0;
	scanf("%d",&n);
	while(a<=n-2)
	{b=a+1;
	while(b<=n-1)
	{c=b+1;
	while(c<=n)
	{
	int sum=a+b+c;
	if(sum==n)
	{
	ct=ct+1;
	}
	c=c+1;
	}
	b=b+1;
	}
	a=a+1;
	}printf("%d",ct);
	return 0;
}
