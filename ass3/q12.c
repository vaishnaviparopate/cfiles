//find wether a given year is aleap year.(hint:a year said to be a leap year if it is either divisible by 4 but not divisible by100or divisible by 400. 
#include<stdio.h>
int main()
{
	int y;
	printf("enter the number:y");
	scanf("%d",&y);
	if(y%4==0 && y%400==0)
	{printf("%d is a leap year.\n",y);
	}
	else{printf("%d it is not leap year.\n",y);
	}
	return 0;
}

