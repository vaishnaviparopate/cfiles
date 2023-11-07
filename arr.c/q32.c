/*Convert a given Roman numeral into its decimal equivalent. The following table gives the Roman numerals and their decimal equivalents: Roman Decimal
M 1000
D 500
C 100
L 50
X 10
V 5
I 1
*/

#include<stdio.h>
int main()
{
	int k;
	
	char R[]={'I','V','X','L','C','D','M'};
	int N[]={1,5,10,50,100,500,1000};
	
	printf("enter the number:");
	scanf("%d",&k);
	int arr[k];
	for(int i=0; i<k; i++)
	{printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	
	}int p=0;
	int m[p];
	int sum=0;
	for(int i=0; i<k; i++)
	{
	for(int j=0; j<sizeof(N); j++)
	{
	if(arr[i]==R[i])
	{
	sum=sum+N[i];
	}
	}
	}
	int sum1=0;
	printf("%d",sum);
	return 0;
}
