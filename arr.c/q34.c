//merging of two array
#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&arr[i]);
	}
	int arr1[m];
	for(int i=0; i<m; i++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&arr1[i]);
	}
	int k[n+m];
	int i;
	for(i=0; i<n; i++)
	{
	k[i]=arr[i];
	}
	int c=n;
	for(int j=0; j<m; j++)
	{
	k[c]=arr1[j];
	c=c+1;
	}
	for(int i=0; i<n+m; i++)
	{
	printf("%d",k[i]);
	}
	return 0;
}

