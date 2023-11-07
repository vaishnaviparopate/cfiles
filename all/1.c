#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
	max=a;
	min=b;
	
	}
	else
	{
	max=b;
	min=a;
	}
	if(max>c)
	{
	if(c>min)
	{
	printf("min=%d",min);
	}
	else{
	printf("min=%d",c);
	}}
	else
	{
	printf("max=%d",max);
	}
	return 0;
	
}
