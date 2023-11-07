//construct a flowchart to show how you can decided if a given number is prime or not.
#include<stdio.h>
int main()
{
int n;
printf("enter the number:n");
scanf("%d",&n);
int i=1;
int c=0;
while(i<=n)
{
if(n%i==0)
{
c=c+1;
i=i+1;
}
i=i+1;
}
if(c==2)
{
printf("%d is a prime number",n);
}else
{printf("%d is not a prime number",n);}
return 0;
}
