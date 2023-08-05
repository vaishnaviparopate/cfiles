//make array of first 10 even number
																	#include<stdio.h>
int main()
{
	
	int arr[10];
	int i=1,c=0;
	while(c<10)
	{
	if(i%2==0)
	{c=c+1;
	arr[c-1]=i;
	}
	i=i+1;
	}
	for(int i=0; i<10; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
