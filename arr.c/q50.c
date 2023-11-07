//wave 
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(int i=0; i<m; i++)
	{
	for(int j=0; j<n; j++)
	{
	printf("enter the number:");
	scanf("%d",&arr[i][j]);
	}
	printf("\n");
	}
	for(int i=0 ;i<m; i++)
	{
	if(i%2==0)
	{
	for(int j=0; j<n; j++)
	{
	printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
	else
	{
	for(int j=n-1; j>=0; j--)
	{
	printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
	}
	return 0;
	
	
}
