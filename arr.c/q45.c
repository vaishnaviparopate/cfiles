//reverse array without using another array
#include<stdio.h>
void reverse(int arr[])
{
int i=0; 
int j=6;
while(i<j)
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
return ;
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enetr the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
	printf("%d",arr[i]);
	}
	reverse(arr);
	for(int i=0; i<=n-1; i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
	
}
