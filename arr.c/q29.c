//In the flowchart of the above question, print the names input by the user in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][10];
	for(int i=0; i<5;i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%s",str[i]);
	}
	for(int i=5-1; i>=0; i--)
	{
	printf("%s\n",str[i]);
	}
	return 0;
}
