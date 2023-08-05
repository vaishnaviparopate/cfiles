//create a list that store first n odd number.takie n as input from the user.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int arr[n];
	int c=0,i=1;
	while(c<=n)
	{
	if(i%2!=0)
	{
	arr[c]=i;
	c=c+1;
	}
	i=i+1;
	}
	for(int j=0; j<n; j++)
	{
	printf("%d\n",arr[j]);
	}
	return 0;
}
