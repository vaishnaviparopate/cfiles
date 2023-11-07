/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
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
	 while(j<=i)
	 {printf("%d ",i);
	 j=j+1;
	 }
	 printf("\n");
	 i=i+1;
	 }
	  return 0;
}
