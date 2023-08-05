//create a list that store armtrong number upto n.
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int arr[n];
	int p=0;
	for(int i=1; i<=n; i++)
	{int c=0,b=i;
	while(b>0)
	{c=c+1;
	b=b/10;
	}
	
	int sum=0,a=i,r;
	while(a>0)
	{
	r=a%10;
	sum=sum+pow(r,c);
	a=a/10;
	}
        
	if(sum==i)
	{
	arr[p]=i;
	p=p+1;
	}
	}
	for(int i=0; i<p; i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
