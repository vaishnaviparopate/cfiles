//find the even natural number divisible 7 between 2 number.
#include<stdio.h>
int main()
{
int a=1;
int b=70;
while(a<=b)
{
if(a%2==0)
{if(a%7==0)
{printf("%d\n",a);
a=a+1;}
else{a=a+1;
}}
a=a+1;}
return 0;
}
