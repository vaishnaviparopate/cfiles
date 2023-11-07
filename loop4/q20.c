//develop a flowchart to show how to find all the perfect number under 10000
#include<stdio.h>
int main()
{
	int i=2;
	int n=10000;
	while(i<=n)
	{
	int j=1;
	int sum=0;
	while(j<i)
	{
	if(i%j==0)
	{
	sum=sum+j;
	}
	j=j+1;
	}
	if(sum==i)
	{
	printf("%d\n",i);
	}
	i=i+1;
	}
	return 0;
	
}
