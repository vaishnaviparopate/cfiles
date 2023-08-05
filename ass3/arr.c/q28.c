//Write a program to create an array of n items where n is input from the user. Then input n names from the user and add them to the array.
#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d %d",&n,&m);
	char arr[n][m];
	for(int i=0; i<n; i++)
	{
	printf("enter the name:");
	scanf("%s",arr[i]);
	
	}
	for(int i=0; i<n; i++)
	{
	printf("%s\n",arr[i]);
	}
	return 0;
}
