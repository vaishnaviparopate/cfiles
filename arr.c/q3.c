//make an array for table 3
#include<stdio.h>
int main()
{
	int n,m,k=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=1; i<=n; i++)
	{
	m=3*i;
	arr[k]=m;
	k=k+1;
	}
	for(int i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
}
