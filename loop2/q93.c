/*
----*----
---*-*---
--*---*--
-*-----*-
*-------*
-*-----*-
--*---*--
---*-*---
----*----
*/

#include<stdio.h>
int main()
{       int n,i;
	scanf("%d",&n);
	for(i=1; i<n+1; i++)
	{
		int j;
		for(j=1; j<=n+i; j++)
		{
		if(j==n-(i-1) || j==n+(i-1)) printf("*");
		else printf(" ");
		}
	       printf("\n");
	       }
	       int k=n-1;
	       for(i=1; i<n; i++)
	       {
	       int j;
	       for(j=1; j<=n+k; j++)
	       {
	       if(j==(i+1) || j==(k+(n-1))) printf("*");
	       else printf(" ");
	       }
	       k=k-1;
	       printf("\n");
	       }
	return 0;
}
