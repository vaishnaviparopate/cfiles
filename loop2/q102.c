//write aprogram to find the kth largest factor of the given number n. for example,if the given number n is 12 and k is 2 as the factor of 12 are 1,2,3,4,6 and 12 then the second largest factor is 6,so the output should be

#include<stdio.h>
int main()
{
	int i=12,k=2,c=0,n=i;
	while(i<=1)
	{
	while(n%i==0)
	{
	c=c+1;
	if(k==c)
	{
	printf("%d",i);
	}
	}
	i=i-1;
	}
	return 0;
	
}
