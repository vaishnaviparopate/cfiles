/*
1 2 3 4 5
10 9 8 7 6
20 19 18 17 16
21 22 23 24 25
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int j=1;
		int k=1;
		while(j<=n)
		{
			if(i%2==0)
			{
				printf("%d ",k);
				k=k-1;
				j=j+1;
			}
			else{
			printf("%d ",k);
			k=k+1;
			j=j+1;
			}
		}
	         printf("\n");
	         i=i+1;
	         k=k+(i*i);
	         
		}return 0;
}
