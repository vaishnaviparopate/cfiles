//given a list and its size,print the list in reverse order.l=[5,4,9,2,1,0] 

#include<stdio.h>
int main()
{
	
        int arr[6]={5,4,9,2,1,0};
	for(int i=5; i>=0; i--)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
