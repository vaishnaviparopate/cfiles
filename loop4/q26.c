/*
Create a pyramid of numbers consisting of a given number of lines. For example, if the given number is 5, then we should see the following:
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
         {int j=1;
	 int k=1;
	 while(j<=(i+(i-1)))
	 {if(j<=i)
	 {k=k+1;
	 printf("%d ",k);
	 j=j+1;
	 }
	 k=k-1;
	 printf("%d ",k);
	 j=j+1;
	 }
	 printf("\n");
	 k=k+1;
	 i=i+1;
          }
         return 0;
}
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a=1;
	for(i=1; i<=n; i++)
	{
	int j;
	int k=1;
	for(j=1; j<=a; j++)
	{
	if(j<=i)
	{			//pending
	printf("%d ",k);
	k=k+1;

	}
	printf("%d ",k);
	k=k-1;;
	}
	
	printf("\n");
	a=a+2;
	}
        return 0;
}



















