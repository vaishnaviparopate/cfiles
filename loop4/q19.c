//construct the flowchart to print multiplication table form 1 to 5
#include<stdio.h>
int main()
{
	int i=1;
	int n=5;

	while(i<=n)
	{
	int j=1;
	while(j<=n)
	{
	printf("%d*%d = %d\n",i,j,i*j);
	j=j+1;
	}
	printf("\n");
	i=i+1;
	}return 0;
}
