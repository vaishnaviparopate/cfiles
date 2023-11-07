//constrct the flowchart to show how the factor of a given number can be obtained.
#include<stdio.h>
int main()
{
int n;
printf("enter the number:n");
scanf("%d",&n);
int i=1;
while(i<=n)
{
if(n%i==0)
{
printf("%d\n",i);
i=i+1;
}
i=i+1;
}return 0;
}
