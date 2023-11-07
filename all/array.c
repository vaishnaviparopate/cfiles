#include<stdio.h>
#include<string.h>
int main()
{
	char name[4][10];
	printf("enter 4 nmaes:\n");
	for(int i=0; i<4; i++)
	{
	scanf("%s",name[i]);
	}
	for(int i=0; i<4; i++)
	{
	printf("%s\n",name[i]);
	} 
	return 0;
}

