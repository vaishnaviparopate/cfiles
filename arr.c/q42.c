/*multiplication of matrices
#include<stdio.h>
int main()
{
	int n,m,l,o;
	printf("enter the number:");
	scanf("%d %d %d %d",&n,&m,&l,&o);
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
	int b[l][o];
	for(int i=0; i<l; i++)
	{
	for(int j=0; j<o; j++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&b[i][j]);
	}
	printf("\n");
	}
	int c[n][o];
	int ml= m;
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<o; j++)
	{
	c[i][j]=0;
	for(int k=0; k<ml; k++)
	{
	c[i][j]=c[i][j]+arr[i][k]*b[k][j];
	}
	}
	printf("\n");
	}

	for(int i=0; i<n; i++)
	{
	for(int j=0; j<o; j++)
	{
	printf("%d ",c[i][j]);
	}
	printf("\n");
	}
	return 0;
}
*/



#include<stdio.h>
int main()
{
	int n,m,l,o;
	printf("enter the number:");
	scanf("%d %d %d %d",&n,&m,&l,&o);
	int a[n][m];
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&a[i][j]);
	}
	printf("\n");
	}
	int b[l][o];
	for(int i=0; i<l; i++)
	{
	for(int j=0; j<o; j++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&b[i][j]);
	}
	printf("\n");
	}
        int c[n][o];
        int ml=m;
        for(int i=0; i<n; i++)
        {
        
        for(int j=0; j<o; j++)
        {
        c[i][j]=0;
        for(int k=0; k<ml;k++)
        {
        
        c[i][j]=c[i][j]+a[i][k]*b[j][k];
        }
        }
        printf("\n");
        }
        for(int i=0; i<n; i++)
        {
        for(int j=0; j<o; j++)
        {
        printf("%d",c[i][j]);
        }
        printf("\n");
        }return 0;
        }
