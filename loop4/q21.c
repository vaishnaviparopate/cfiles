//develop a flowchart to show how to determine all the 3 digit armstrong number if the sum of the values of the digit each raised to the power equal to the number of digit in the number equal to the number.for example 153 is an armstrong number,because 153=1^3+5^3+3^3
#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int r;
int sum=0;
int m=n;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum+pow((r),3);
}
if(sum==m)
{
printf("it is armstrong number=%d",m);
}
printf("it is not armstrong number");
return 0;
}
