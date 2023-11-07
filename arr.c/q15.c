//make a flowchart to find unique elements
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	
	int i=0;
	while(i<n)
	{
	int j=0,c=0;
	while(j<n)
	{
	if(arr[i]==arr[j])
	{
	c=c+1;
	}
	j=j+1;
	}	
	if(c==1)
	{
	printf("\n%d ",arr[i]);
	}
	i=i+1;
	}
	return 0;
}
