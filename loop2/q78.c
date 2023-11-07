//construct the flowchart to find third max of n given number.

#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int i=1;
	int max=0;
	int smax=0;
	int tmax=0;
	for(i=1; i<=n; i++)
	{
	int a;
	scanf("%d\n",&a);
	if(max<a)
	{
	tmax=smax;
	smax=max;
	max=a;
	}
	else if(smax<a)
	{
	smax=max;
	max=a;
	}
	else if(tmax<a)
	{
	tmax=a;
	}
	printf("%d\n",tmax);
	}
	return 0;
}
