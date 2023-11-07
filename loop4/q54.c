/*
* * * * *
- * * * -
- - * - -
*/

/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=n;
	for(i=1; i<=n-2; i++)
	{
	int j;
	for(j=1; j<=i; j++)
	{
	printf("  ");
	}
	for(j=1; j<=k;j++)
	{
	printf("* ");
	}
	k=k-2;
	printf("\n");
	
	}return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int k=n;
	for(i=1; i<=n; i++)
	{int j;
	for(j=1; j<i; j++)
	{
         printf(" ");
        }
	for(j=1; j<=k; j++)
	{
	printf("* ");
	}
	k=k-1;
	printf("\n");
        }return 0;
 }


