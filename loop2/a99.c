//contruct the flowchrt to find a series of five consecutive number,the sum of the square of the first three of which is equal to the sum of the square of the last two

#include<stdio.h>
int main()
{
	int i=0,lh,rh;
	lh=(i-2)*(i-2)+(i-1)*(i-1)+(i)*(i);
	rh=((i+2)*(i+2))+((i+1)*(i+1));
	if(lh==rh)
	{
	printf("%d %d %d %d %d",i-2,i-1,i,i+1,i+2);
	}
	else if(lh==rh)
	{
	}
	else{
	i=i+1;}
	return 0;
}
