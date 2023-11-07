//draw a flowchart to find the sum of the first 15 even natural number.
#include<stdio.h>
int main()
{
	int i=1;
	int c=1;
	int sum=0;
	while (c<=15)
	{
	if(i%2==0)
	{(sum=sum+i);
	c=c+1;
	i=i+1;
	}
	i=i+1;
	}
	printf("%d\n",sum);
	return 0;
}
