//make a flowchart to count the total occurence of a number in the list,input the number from the user
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n; i++)
	{
	printf("%d ",arr[i]);
	}
	int b,c=0;
	printf("\nenter the number b:");
	scanf("%d\n",&b);
	for(int i=0; i<n; i++)
	{
	if(arr[i]==b)
	{
	c=c+1;
	}
	}
	printf("%d",c);
	return 0;
}

