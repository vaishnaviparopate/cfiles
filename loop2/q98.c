//contruct a flowchart to show the logic of printing the first n fibonacci numbers. fibonacci number are obtained from the relation ti=ti-1+ti-2,i=2 to n wher t0=0,t1=1.

#include<stdio.h>
int main()
{
	int n,i=0,j=1,k=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{printf("%d\n",k);
	i=j;
	j=k;
	k=i+j;
	}
	return 0;
}

