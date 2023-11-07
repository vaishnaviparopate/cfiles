/*
1
1 2 1
1 2 3 1
1 2 3 4 1
1 2 3 4 5 1
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("1\n");
	int i;
	for(i=2; i<=n; i++)
	{
	int k=1;
	int j;
	for(j=1; j<=i+1; j++)
	{
	if(k<=i)
        {
         printf("%d ",k);
	 k=k+1;
	}
	else{
	printf("1");
	}
	}printf("\n");
	}
	return 0;
}
