
//# Kth rotation of n number.
#include<stdio.h>
int main()
{
	int n,k;
	printf("enter the n & k:");
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enetr the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	int arr1[n];
	for(int i=0; i<n; i++)
	{
	int indx=(i+k)%n;
	arr1[indx]=arr[i];
	}
	for(int i=0; i<n; i++)
        {
        printf("%d ",arr1[i]);
        }
	
	return 0;
}



/*# Car
#include<stdio.h>
int main()
{
	
	int s=0;
	while(1)
	{int m;
	scanf("%d",&m);
	if(m==1)
	{
	if(s==1)
	{
	printf("already start\n");
	}
	else
	{
	printf("start\n");
	s=1;
	}
	}
	else if(m==0)
	{
	if(s==0)
	{
	printf("already stop\n");
	}
	else
	{
	printf("stop\n");
	s=0;
	}
	}
	else if(m!=1 && m!=0)
	{
	printf("crash\n");
	break;
	}
	}
	
        return 0;
	
}
*/

/*
# Third max of third number
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:");
	scanf("%d",&arr[i]);
	}
	int max=0, smax=0, tmax=0;
	
	for(int i=0; i<n; i++)
	{
	if(max<arr[i])
	{
	tmax=smax;
	smax=max;
	max=arr[i];
	}
	else if(smax<arr[i])
	{
	smax=max;
	max=arr[i];
	}
	else if(tmax<arr[i])
	{
	tmax=arr[i];
	}
	}
	printf(" Third max:%d",tmax);
	return 0;
}
*/


/*#equillibrium
#include<stdio.h>
int main()
{
	int n;
	printf("enetr  the number:");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
	printf("enter element : ");
	scanf("%d",&arr[i]);
	}
	for(int i=0; i<n-1; i++)
	
	{
	int mid=i+1;
	int lhs=0,rhs=0;
	for(int j=0; j<mid; j++)
	{
	    lhs=lhs+arr[j];
	}
	for(int j=mid+1; j<n; j++)
	{
	rhs=rhs+arr[j];
	}
	if(rhs==lhs)
	{
	printf("equlibrium point:%d\n",mid+1);
	}
	}
	return 0;
}
*/










