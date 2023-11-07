#include<stdio.h>
int main()
{
	while(1)
	{
	int n;
	scanf("%d",&n);
	if(n==1 && n==0)
	{
	printf("start\n");
	}
	else{
	printf("stop\n");
	}
	if(n==1)
	{
	printf("already start\n");
	}
	else {
	printf("already stop\n");
	}
	if(n!=0 && n!=1)
	{
	printf("crash");
	break;
	}
	}
	
	return 0;
	
	
}
