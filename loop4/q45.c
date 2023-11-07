/*
- - - - 1
- - - 1 2
- - 1 2 3
- 1 2 3 4
*/
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		int j=1;
		int k=1;
		while(j<=n-i)
		{

	         printf(" ");
	         j=j+1; 
	         } 
	         if(k<=i) 
		{
		printf("%d ",k);
		k=k+1;
			
		}
		 
		printf("\n");
		i=i+1;
	}return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=(n-i);j++)
		{
	         printf("  ");
		}
		for(int k=1;k<=i;k++)
		{
		printf("%d ",k);
		}
		printf("\n");
		}
		return 0;
	}
	
	
	
	
	
	
	
	
	

