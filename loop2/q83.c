//construct the flowchart to input a positive integer, if the number is even , add up its digits. otherwise multiply the indivisual digits and prints the result.

#include<stdio.h>
int main()
{
	int n,r;
	int sum=0;
	int m=1;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
	while(n>0)
	{r=n%10;
         n=n/10;
         sum=sum+r;
	}
        printf("%d",sum);
        }
        else
        {
	while(n>0)
	{
	r=n%10;
	n=n/10;
	m=m*r;
	}
	printf("%d",m);
	}
	return 0;
}
