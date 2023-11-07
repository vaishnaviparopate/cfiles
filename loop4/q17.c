//given two number m and n , write a program to print all the composite number starting from m to n 1]composite number are number that have more than two factor,for example,if the given number is 4 .the factor of 4 are 1,2 and 4.there are more than two factor of 4,so 4 is composite number.2]for example,if the m=2 and n=9,the output should be 4,6,9.
#include<stdio.h>
int main()
{
int m,n;
printf("enter the number:m,n");
scanf("%d %d",&m ,&n);
while(m<=n)
{
int j=1;
int c=0;
while(j<=m)
{
if(m%j==0)
{
c=c+1;
}
j=j+1;
}
if(c>2)
{
printf("%d\n",m);
}
m=m+1;
}
return 0;
}
