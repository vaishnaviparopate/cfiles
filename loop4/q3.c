//construct a floechart  to show how consecutive even number starting form 2 are summed up until the sum just exceed 1000 and then show the sum and the number of even number added.
#include<stdio.h>
int main()
{
int i=2;
int s=0;
while(s<=1000)
{if(i%2==0)
{
s=s+i;
}
i=i+2;
}
printf("%d\n",s);
return 0;
}

