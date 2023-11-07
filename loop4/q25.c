/*Write a program to find the sum of following series:
1 + 2 + 6 + 24 + 120 . . . . . n terms*/
#include<stdio.h>
int main()
{
	 int n;
	 scanf("%d",&n);
	 int i=1;
	 int s=1;
	 int j=1;
	 int add=0;
	 while(i<=n)
	 {
	  s=s*j;
	  add=add+s;
	  j=j+1;
	  i=i+1;
	  
	  }
	  printf("%d\n",add);
	 return 0;
	 }
