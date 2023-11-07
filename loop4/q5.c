//flowchart to show how to find the product of n natural number.
#include<stdio.h>
int main()
{
int i=1;
int n=10;
int p=1;
while(i<n)
{p=p*i;
i=i+1;}

printf("%d",p);
return 0;
}
