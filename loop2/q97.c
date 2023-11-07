//construct a flowchart to print only the prime factor of a given number n.

#include<stdio.h>
int main()
{
	int n;
	int i=1;
	printf("enter the number:n");
	scanf("%d",&n);
	while(i<=n)
	{
	if(n%i==0)
	{
	int j=1,c=0;
	 while(j<=i)
	 {
	 if(i%j==0)
	 {
	 c=c+1;
	 }
	 j=j+1;
	 }
	 if(c==2)
	 {
	 printf("%d\n",i);
	 }
	 }i=i+1;
	 }
	return 0;
}
