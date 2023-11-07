//construct the flowchart to show how to determine whether a given number is a perfect number.
#include<stdio.h>
int main()
{
int n;
printf("enter the number:n");
scanf("%d",&n);
int i=1;
int sum;
while(i<n)
{
if(n%i==0)
{
sum=sum+i;
i=i+1;
}
else
{
i=i+1;
}
}
if(sum==n)
{
printf("it is perfect number");
}
else
{
printf("it is not perfect number");
}
return 0;
}
