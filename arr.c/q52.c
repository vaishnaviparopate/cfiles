//linear search
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&arr[i]);
	}
	int b;
	printf("enter the b=");
	scanf("%d",&b);
	for(int i=0 ;i<n; i++)
        {
        if(arr[i]==b)
        {
        printf("%d",i+1);
        }
        }
        return 0;
}
