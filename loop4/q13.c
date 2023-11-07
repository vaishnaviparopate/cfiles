//draw a flowchart to show the logic of obtaining  the reverse form of a given whole number.
#include<stdio.h>
int main()
{
int n;
printf("enter the number:n");
scanf("%d",&n);
int r;
int sum=0;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum*10+r;
}
printf("%d",sum);
return 0;
}
