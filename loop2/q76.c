//contruct the flowchart to determine and the minimum out of a n given number.
#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d %d",&n,&a);
	int max=a;
	int min=a;
	int i;
	while(i<=n)
	{
	int a;
	scanf("%d",&a);
	if(max<a)
	{max=a;
	i=i+1;
	}
	else if(min>a)
	{
	min=a;
	i=i+1;
	}printf("%d\n",min);
	i=i+1;
	}
	return 0;
}

