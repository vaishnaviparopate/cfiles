/*
0 1 2 3 4 5
0 1 2 3 4
0 1 2 3
0 1 2
0 1
*/

#include<stdio.h>
int main()
{       
	int i;
	scanf("%d",&i);
	while(i>=2)
	{       int j=1;
	        int k=0;
	        while(j<=i)
	        {
		printf("%d",k);
		k=k+1;
		j=j+1;
		}
		printf("\n");
		i=i-1;
		}
		return 0;
}
