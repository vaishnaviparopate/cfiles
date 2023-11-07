//Write a program to create an array of 10 numbers from the user, and sum the elements on odd positions as odds and on even positions as evens.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter rhe number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int cp=0,cn=0;
	for(int i=0; i<n; i++)
	{
	if(i%2==0)
	{
	cp=cp+arr[i];
	
	}
	else
	{
	cn=cn+arr[i];
	}
	}printf("%d %d",cp,cn);
	return 0;
	
}
