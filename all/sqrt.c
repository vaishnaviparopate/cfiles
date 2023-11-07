#include<stdio.h>
#include<math.h>
int main()
{
	int n,b;
	printf("enter the n,b:");
	scanf("%d %d",&n,&b);
	int arr[n];
	for(int i=0;i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	int l=0;
	int h=n-1
	mid=(l+h)\2;
	for(int i=0; i<n; i++)
	{
	if(arr[i]==b)
	{
	printf("found the idx of %d is %d:",b,mid);
	double root= sqrt(b);
	printf("sqrt of %f\n is:",root);
	}
	if(mid<b)
	{
	l=mid+1;
	}
	}
	
	return 0;
}
