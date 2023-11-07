//Write a program to find the sum of following series:
//1 + 2 + 6 + 24 + 120 . . . . . n terms
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a=1;
	int sum=0;
	for(i=1; i<=n; i++) 
	{
	a=a*i;
	sum=sum+a;
	
	}printf("%d\n",sum);
	
	return 0;
}
