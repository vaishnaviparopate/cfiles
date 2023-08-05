//write a program to create a list of 10 number from the user,and count the nuber of od and even number.
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
	int cp=0,cn=0;
	for(int i=0; i<n; i++)
	{
	if(arr[i]>=0)
	{
	cp=cp+1;
	}
	else{
	cn=cn+1;
	}
	}
	printf("cp=%d ",cp);
	printf("cn=%d ",cn);
	return 0;
}
