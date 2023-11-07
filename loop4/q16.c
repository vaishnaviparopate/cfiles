//given a number n and draw a flowchart that print the count  of numbers from 1 to n that are not divisible by any of the following number(2,3,4,5,6,7,8,9,10). for example if n=11 then output should be any of the following number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:n");
	scanf("%d",&n);
	int j=1;
	int c=0;
	while(j<=n)
	{
	if(j<=1)
	{
	if(n%j==0)
	{
	c=c+1;
	j=j+1;
	}
	else
 	{
	j=j+1;
	}
	}
	if(j>=2 && j<=10)
	{
	j=j+1;
	}
	else if(n%j==0)
	{c=c+1;
	j=j+1;
	}	
	else
	{j=j+1;
	}
	}
        printf("%d\n",c);
        
	return 0;
}
