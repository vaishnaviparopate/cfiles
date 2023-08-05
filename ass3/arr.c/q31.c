/*In a certain city, the maximum and the minimum temperatures on each day are recorded each month to determine the following at the end of the month:
1. mean maximum temperature in the month
2. mean minimum temperature in the month
3. highest maximum temperature
4. lowest minimum temperature
5. hottest day number of the month
6. coldest day number of the month.
Draw a flowchart to show how the desired result can be obtained. Input n from the user where n is number of days.
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number max: %d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int arr1[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number min: %d\n",i+1);
	scanf("%d",&arr1[i]);
	}
	int sum=0,sum1=0,mean,mean1;
	for(int i=0; i<n; i++)
	{
	sum=sum+arr[i];
	sum1=sum1+arr1[i];
	}
	mean=sum/n;
	mean1=sum1/n;
	printf("mean=%d\n",mean);
	printf("mean1=%d\n",mean1);
	int max=arr[0];
	int i;
	for(i=1; i<n; i++)
	{
	if(max<arr[i])
	{
	max=arr[i];
	}
	}
	printf("highest max=%d\n",max);
	printf("hottest day=%d\n",i);
	int min=arr1[0];
	for(int i=1; i<n; i++)
	{
	if(min>arr1[i])
	{
	min=arr1[i];
	}
	}
	printf("lowest min=%d\n",min);
	printf("coldest day=%d\n",i);
	return 0;
}


