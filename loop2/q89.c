/*
*
**
*-*
*--*
*****
*/

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
	int j;
	for (j=1; j<=i; j++)
	{
	if(j==1 || i==j) printf("❤️ ");
	else printf("  "); 
        }
        printf("\n");
        }
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	printf("❤️ ");
	}
	}
	return 0;
        }
