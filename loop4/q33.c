/*
Write a program for obtaining the sum of a given number of terms (n) for a given value of X in the following mathematical series: (Input X and n from the user)
X+(X^2)/2+(X^3)/3+(X^4)/4 ....upto n terms
X-(X^3)/3+(X^5)/5-(X^7)/7+(X^9)/9-.... upto n terms
X-(X^3)/3!+(X^5)/5!-(X^7)/7!+ .... upto n terms
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	float sum=0;
	int i;
	int x;
	scanf("%d",&x);
	for(i=1; i<=n; i++)
	{
	sum=sum+(pow((x),i))/i;
	}
	printf("%f",sum);
	return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>

int main()
{
 	int n;
 	scanf("%d",&n);
 	int i;
 	int m=1;
 	int x;
 	scanf("%d",&x);
 	float sum=0;
 	for(i=1; i<=n; i++)
 	{if(i%2==0){
 	sum=sum-(pow((x),m))/m;
 	m=m+2;
 	
 	continue;
 	}
 	sum=sum+(pow((x),m))/m;
 	m=m+2;
 	}
 	
 	printf("%f",sum);
 	return 0;	
}
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int fac=1;
	int k=1;
	float sum=0;
	int x;
	scanf("%d",&x);
        for(i=1; i<=n; i++)
	{int j;
	for( j=1;j<=i; j++)
	{fac=fac*j;
	}				//pending
	if(i%2==0)
	{sum=sum-(pow((x),k))/k*fac;
	k=k+2;
	continue;
	}
	sum=sum+(pow((x),k))/k*fac;
	k=k+2;
	}
	printf("%f",sum);
	return 0;
}














