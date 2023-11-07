//construct the flowchart to input number,n, and print first n prime number

#include<stdio.h>
int main()
{
	int n,c=0,i=2;
	scanf("%d",&n);
	while(c<n)
	{
	int j=2;
	int k=0;
	if(j<i)
	{
	if(i%j==0)
	{
	k=k+1;
	}
	j=j+1;
	}
	if(k==0)
	{printf("%d\n",i);
	c=c+1;
	}
	i=i+1;
	}
	return 0;
}
