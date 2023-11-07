//construct the flowchart to determine the hcf of n given number. input the value n from the user,then input n number from the user.
#include<stdio.h>
int main()
{
	int n,a,r;
	scanf("%d %d",&n,&a);
	int i,hcf=a;
	for(i=1; i<=n; i++)
	{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
	r=hcf%a;
	hcf=a;
	a=r;
	}
	}
	printf("%d",hcf);
	return 0;
}




