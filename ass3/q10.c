//the following rulrs are use to calculate the bonus for the employees of an organization.1]if the pay is more than $3000,the bonus amount is fixed ,and it is equal to $ 300 .2]if the play is more than $ 1600,butless than or equal to $3000,the bonus will be10% of the play subject to a maximum of $240.3]if the play is less than equal to $1600 the bonus is 15% of pay,subject to a minimum of $100.
#include<stdio.h>
int main()
{
	int pay,b;
	printf("enter the number:pay");
	scanf("%d",&pay);
	if(pay>3000)
	{b=300;
	printf("%d",b);
	}
	else if(pay>1600)
	{if(pay<=3000)
	{
	b=pay*0.1;
	if(b>240)
	{printf("240");
	}
	else{printf("%d",b);
	}}
	}else
	{b=pay*0.15;
	if(b<100)
	{printf("100");
	}
	else{printf("%d",b);
	}}
	return 0;
}
