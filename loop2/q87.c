/*
A B C D
A B C D
A B C D
A B C D
*/

#include<stdio.h>
int main()
{       int n;
        scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{int a=1;
	for(int j=1; j<=n; j++)
	{int d=a+64;
	char ch=(char)d;
	printf("%c ",ch);
	a=a+1;
	}
	printf("\n");
	}
}
