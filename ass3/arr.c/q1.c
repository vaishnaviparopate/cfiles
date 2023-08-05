/*
#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,7,3};
	printf("%d",arr[2]);
	return 0;
}
*/

/*create array
#include<stdio.h>
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{printf("%d ",arr[i]);
	}
	
	return 0;
}
*/

//crate revers array
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=4; i>=0; i--)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}





