//construct the flowchart to show how to store the frist 100 natural number in an array and then show them in the reverse sequence.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	
	}
	for(int i=n-1; i>=0; i--)
	{
	printf("\n%d ",arr[i]);
	}
	return 0;
}
