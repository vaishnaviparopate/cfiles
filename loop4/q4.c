//construct the flowchart to print the number below 100 that are divisible by 7
#include<stdio.h>
int main()
{
int i=1;
int n=100;
while(i<=100)
{if(i%7==0)
{printf("%d\n",i);
i=i+1;
}
i=i+1;
}
return 0;
}
