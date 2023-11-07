//sum of the square of the 9 natural number divisible by 3
#include<stdio.h>
int main()
{
int i=1;
int n=9;
int c=0;
int square=0;
int sum=0;
while (c<=n)
{
if (i%3==0)
{c=c+1;
square=i*i;
sum=sum+square;
printf("%d\n",sum);
i=i+1;
}
i=i+1;
}return 0;
}
