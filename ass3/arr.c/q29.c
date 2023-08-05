//In the flowchart of the above question, print the names input by the user in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
	int n,m; 
	scanf("%d %d",&n,&m);
	char arr[n][m];
	for(int i=0; i<n;i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%s",arr[i]);
	}
	for(int i=n-1; i>=0; i--)
	{
	printf("%s\n",arr[i]);
	}
	return 0;
}
