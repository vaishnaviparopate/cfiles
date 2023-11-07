//draw a flowchart to show how the digits of a given number can be obtained
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int r;
int sum=0;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum+r;
}
printf("%d",sum);
return 0;
}
