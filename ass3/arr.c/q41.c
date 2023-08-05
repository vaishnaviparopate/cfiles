/*transpose
123   147
456 = 258
789   369
*/
#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i][j]);
	}
	printf("\n");
	}
	int b[n][m];
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	b[j][i]=arr[i][j];
	}
	printf("\n");
	}
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	printf("%d ",b[i][j]);
	}
	printf("\n");
	}
	return 0;
}
