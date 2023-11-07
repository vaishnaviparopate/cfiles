/*
*-*-*-*-*
*-------*
*-------*
*-------*
*-*-*-*-*
*-------*
*-------*
*-------*
*-*-*-*-*
*/

#include<stdio.h>
int main()
{
	int n,i,m;
	scanf("%d",&n);
	for(i=1; i<=1; i++)
	{
	int j;
	for(j=1; j<=n; j++) 
        {printf("* ");
        }
        printf("\n");
        }
        for(m=1; m<=n-2; m++)
        {
        int j;
        for (j=1; j<=n; j++)
        {
        if(j==1 || j==n) 
        {printf("* ");
        }
        else{
        printf("  ");
	}
	}printf("\n");
	}
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{printf("* ");
	}
	}printf("\n");
	for(i=1; i<=n-2; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	if(j==1 || j==n)
	{ printf("* ");
	}
	else 
	{printf("  ");
	}
	}printf("\n");
	}
	for(i=1; i<=1; i++)
	{int j;
	for(j=1; j<=n; j++)
	{
	printf("* ");
	}
	}
	return 0;
}	

