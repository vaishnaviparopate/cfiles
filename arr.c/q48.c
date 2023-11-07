//sum the matrix
#include<stdio.h>
int main()
{
	int n;
	printf("enetr the rows:");
	
	scanf("%d",&n);
	int m;
	printf("enter the coloum:");
	scanf("%d",&m);
	printf("enter the number:\n");
	int arr[n][m];
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	scanf("%d",&arr[i][j]);
	}
	printf("\n");
	}
	int sum=0;
	for(int i=0; i<n; i++)
	{for(int j=0; j<m; j++)
	{
	sum=sum+arr[i][j];
	}
	}
	printf("%d",sum);
	return 0;
}
