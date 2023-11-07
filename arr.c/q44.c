//triplate sum is equal to x   [(a+b+c)=x]6
#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int arr[n];

	int triplate=0;
	for(int i=0; i<n; i++)
	{
	for(int j=i+1; j<n; j++)
	{
	for(int k=j+1; k<n; k++)
	{
	if(arr[i]+arr[j]+arr[k]==x)
	{
	triplate++;
	printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
	}
	}
	}
	}
	printf("\n%d",triplate);
	return 0;
}
