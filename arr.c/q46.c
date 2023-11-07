//reverse array
#include<stdio.h>
int main()
{
	 int n;
	 scanf("%d",&n);
	 int arr[n];
	 for(int i=0; i<n; i++)
	 {
	 printf("enetr the number:%d\n",i+1);
	 scanf("%d",&arr[i]);
	 }
	 for(int i=0; i<n; i++)
	 {
	 printf("%d ",arr[i]);;
	 }
	 int b[n];
	 for(int i=0; i<=n-1; i++)
	 {
	 b[i]=arr[n-1-i];
	 }
	 for(int i=0; i<=n-1; i++)
	 {
	 printf("\n%d ",b[i]);
	 }
	 return 0;
	 
}
