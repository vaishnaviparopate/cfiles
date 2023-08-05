//make an array for universal table.
#include<stdio.h>
int main()
{
	int n,m,k,c=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=1; i<=n; i++)
	{
	m=k*i;
	arr[c]=m;
	c=c+1;
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
