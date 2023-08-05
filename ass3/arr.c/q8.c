//given a list and its size,print alternate elements from the last l=[5,4,9,2,1,0].
#include<stdio.h>
int main()
{
	int arr[6]={5,4,9,2,1,0};
	for(int i=0; i<6; i=i+2)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}


