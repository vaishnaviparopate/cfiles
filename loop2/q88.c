//write a program to find yhe sum of all primenumber between 1to n.

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m,sum=0;
	for(m=1; m<=n; m++)
	{int j, c=0;
	for(j=1; j<=m; j++)
	{
	if(m%j==0)
	{
	c=c+1;
	}
	}
	if(c==2)
	{
	sum=sum+m;
	}
	}
	printf("%d",sum);
	return 0;
}
