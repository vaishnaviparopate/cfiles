//matrices
#include<stdio.h>
int main()
{
	
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{7,8},{5,6}};

	int sum[2][2];
	for(int i=0; i<2; i++)
	{
	for(int j=0; j<2; j++)
	{
	sum[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");
	}
	for(int i=0; i<2; i++)
	{
	for(int j=0;j<2; j++)
	{
	printf("%d ",sum[i][j]);
	}
	printf("\n");
	}
	return 0;
}
