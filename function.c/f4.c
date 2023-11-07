/*
#include<stdio.h>
int main()
{
	int n;
	printf("enetr the number:");
	scanf("%d",&n);
	int r;
	printf("enetr the number:");
	scanf("%d",&r);
	int nfact=1;
	int rfact=1;
	int nrfact=1;
	for(int i=2; i<=n; i++)
	{
	nfact=nfact*i;
	}
	for(int j=2; j<=r; j++)
	{rfact= rfact*j;
	}
        for(int i=2;i<=n-r; i++)
	{
	nrfact=nrfact*i;
	}
	int ncr=nfact/(rfact*nrfact);
	printf("%d",ncr);
	return 0;
}
*/

#include<stdio.h>
int factorial(int x)
{
int fact=1;
for(int i=2; i<=x; i++)
{fact=fact*i;
}
return fact;
}
int main()
{
	int n;
	printf("enetr the number:");
	scanf("%d",&n);
	int r;
	printf("enetr the number:");
	scanf("%d",&r);
	int nfact=factorial(n);
	int rfact=factorial(r);
	int nrfact=factorial(n-r);

	int ncr=nfact/(rfact*nrfact);
	printf("%d",ncr);
	return 0;
}

