//make a folwchart to count positive and negative elements in a list.take elements as input from the user.
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n; i++)
	{
	printf("%d",arr[i]);
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
	}printf("\ncp=%d",cp);
	printf("\ncn=%d",cn);
	return 0; 
}
