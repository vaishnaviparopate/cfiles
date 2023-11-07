//sum of the num divisible by p but not by q 
#include<stdio.h>
int main()
{
int p,q;
printf("enter the number:p,q");
scanf("%d %d",&p,&q);
int i=1;
int n=100;
int sum=0;
while (i<=100){
if(i%p==0 && i%q!=0) 
{sum=sum+i;
i=i+1;
}
else{i=i+1;}
}
printf("%d\n",sum);
return 0;
}
