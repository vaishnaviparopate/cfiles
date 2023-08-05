/*construct a flowchart to calculate the electricity bill (accept the number of unit from the user)according to the following criteria.first 100 units=no charge
next 100 units=5 rs per unit
after 200 units=10 rs per unit*/
#include<stdio.h>
int main()
{
	int u,t;
	printf("enter the number:u");
	scanf("%d",&u);
	if(u<=100)
	{printf("no charge");
	}
	else if(u<=200)
	{t=(u-100)*5;
	printf("%d",t);
	}
	else if(u>200)
	{t=(u-200)*10;
	printf("%d",t);
	}	
	return 0; 
}
