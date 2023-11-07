//construct the flowchart to find out the sum of the following series 5+55+555+5555+..upto n term.
#include<stdio.h>
int main()
{
int n;
printf("enter the number:n");
scanf("%d",&n);
int i=1;
int sum=0;
int add=0;
while(i<=n)
{
sum=sum*10+5;
add=add+sum;
i=i+1;
}
printf("%d",add);
return 0;
}
