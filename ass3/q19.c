//find the second max of 4 number (use minimum number of comparisoins).
#include<stdio.h>
int main()
{
	int a,b,c,d,m,sm,m1,sm1;
	printf("enter the number:a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>b)
	{
	m=a;
	sm=b;
	}
	else{
	m=b;
	sm=a;
	}
	if(c>d)
	{m1=c;
	sm1=d;
	}
	else{
	m1=d;
	sm1=c;
	}
	if(m>m1)
	{
	if(m1>sm)
	{printf("%d\n",sm);
	}
	else{printf("%d\n",m1);
	}}
	if(m>sm1)
	{printf("%d\n",m);
	}
	else{
	printf("%d\n",sm1);
	}
	return 0;
}
