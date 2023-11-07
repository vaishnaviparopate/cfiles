#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	printf("enter the number n ,m:");
	scanf("%d %d",&n,&m);
	char a[n+1];
	scanf("%s",a);
	
	char b[m+1];
	scanf("%s",b);
	
	int k=0;
	char c[n+m+1];
	
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<m; j++)
	{
	if(a[i]==b[j])
	{
	c[k]=a[i];
	k=k+1;
	}
	}
	}
	
	printf("%s",c);
	return 0;
}
