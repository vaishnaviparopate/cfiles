//in the above question take the first conditionas divisibility of year by 100 and construct the flowchart .do the dry run for the same input.
#include<stdio.h>
int main()
{
	int y;
	printf("enter the number:y");
	scanf("%d",&y);
	if(y%100==0 && y%400==0)
	{printf("%d is a leap year\n",y);
	}
	else if(y%4==0)
	{printf("%d is a leap year\n",y);
	}
	else{printf("%d it is not leap year\n",y);
	}
	return 0;	
}
