/*matrices sum
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
*/

#include<stdio.h>
int main()
{
	int n, m,n1,m1;
	scanf("%d %d %d %d",&n,&m,&n1,&m1);
	int a[n][m];
	for(int i=0;  i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&a[i][j]);
	}
	printf("\n");
	}int b[n1][m1];
	for(int i=0;  i<n1; i++)
	{
	for(int j=0; j<m1; j++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&b[i][j]);
	}
	printf("\n");
	}
	
	int sum[n][m];
	for(int i=0; i<n; i++)
	{
	
	for(int j=0; j<m; j++)
	{
	sum[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");
	}
	for(int i=0;  i<n1; i++)
	{
	for(int j=0; j<m1; j++)
	{
	printf("%d ",sum[i][j]);
	}
	printf("\n");
	}
	return 0;
}
