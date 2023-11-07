//write a program to crate a list of natural number till 20 and print it.

#include<stdio.h>
int main()
{
	int k=1;
	int arr[20];
	for(int i=0; i<20; i++)
	{
	arr[i]=k;
	k=k+1;
	}
	for(int i=0; i<20; i++)
	{
	printf("%d\n",arr[i]);
	}
	return 0;
}
