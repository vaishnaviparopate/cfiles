//given a list [1,2,3,4,5,6,7],take a number from the user and check whether it exit in the list or not.

#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int n;
	scanf("%d",&n);
	int found =0;
	for(int i=0; i<7; i++)
	{if(arr[i]==n)
	{found=1;
	break;
	}
	}
	if(found)
	{
	printf("exist in list\n");}
	else
	{
	printf("not exist in list\n");
	}
	
	return 0;
}
