//could you construct a flowchart to find the second max of n given number.
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int max=0;
	int smax=0;
	for(i=1; i<=n; i++)
	{
	int a;
	scanf("%d",&a);
	if(max<a)
	{
	smax=max;
	max=a;
	}
	else if(smax<a)
	{
	smax=a;
	}
	printf("%d",smax);
	}return 0;
	
}
