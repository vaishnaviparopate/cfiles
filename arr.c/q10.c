//write a program to crate a lilst of 7 number from the user,and print true if the complete list consist of consecutive number or not.

#include<stdio.h>
int main()
{
	
	int arr[7];
	for(int i=0; i<7; i++)
	{
	printf("enter the number:%d\n",i);
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<7; i++)
	{
	printf("%d ",arr[i]);
	}
	printf("\n");
	int arr1[7];
	for(int i=0; i<7; i++)
	{
	int b=arr[i];
	 arr1[i]=b;
	b=b+1;
	}
	for(int j=0; j<7; j++)
	{
	printf("%d ",arr1[j]);
	}
	int equal=1;
	for(int i=0; i<7; i++)
	{
	if(arr[i]!=arr1[i])
	{
	equal=0;
	break;}
	}
	if(equal)
	{
	printf("\ntrue");
	}
	else{
	printf("\nfalse");
	}
	return 0;
}
