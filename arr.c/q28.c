//Write a program to create an array of n items where n is input from the user. Then input n names from the user and add them to the array.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][10];
	for(int i=0; i<5; i++)
	{
	printf("enter the name:");
	scanf("%s",str[i]);
	
	}
	for(int i=0; i<5; i++)
	{
	printf("%s\n",str[i]);
	}
	return 0;
}
