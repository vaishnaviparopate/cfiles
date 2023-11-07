//some three digits number show the proprty that the sum of the factorial of the digit equal to the number. for example ,145=1!+4!+5!.develop a flowchart to determine the all such number.
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int r;
	int m=n;
	int sum=0;
	while(n>0)
	{
	r=n%10;

	int j=1;
	int fac=1;
	while(j<=r)
	{
	fac=fac*j;
	
	j=j+1;}
	sum=sum+fac;
	n=n/10;
        }if(sum==m)
        {
        printf("%d",m);
        }
        else{
        printf("invalid");
        }
        return 0;
}

