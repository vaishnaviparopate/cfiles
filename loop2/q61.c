/*
45432
34543
23454
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=4;
	int t=1;
	for(i=1; i<=n; i++)
	{
	int  j;
	int m=k;
        for(j=1; j<=t+i; j++)
	{
	printf("%d",m);
	m=m+1;
	}
	int l=n+1;
	for(j=1; j<=n-(i-1); j++)
	{
	printf("%d",l);
	l=l-1;
	}
	k=k-1;
	printf("\n");
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int k=4;
	while(i<=n)
	{
	int j=1;
	int m=k;
	while(j<=n+2)
	{if(j<=(n+1))
	{
	printf("%d",m);
	m=m+1;
	j=j+1;
	}
	printf("%d",m);
	m=m-1;
	j=j+1;
	}
	printf("\n");
	k=k-1;
	i=i+1;
	}return 0;
}
*/

















