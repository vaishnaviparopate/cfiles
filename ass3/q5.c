//accept the age ,gender(m,f) and the number of days and display the wages accordingly.if the age does not fall in any range then display the following message age>=18 and <30.m=700,f=750,age>=30 and <=40 m=800,f=850
#include<stdio.h>
int main()
{
	int a,day,w;
	char g;
	scanf("%c",&g);
	printf("enter the number:a,day");
	scanf("%d %d",&a,&day);
	if(a>=18 && a<30)
	{if(g=='m'){
	w=day*700;
	printf("%d",w);
	}
	else if(g=='f')
	{w=day*750;
	printf("%d",w);
	}
	}
	else if(a>=30 && a<=40)
	{if(g=='m'){
	w=day*800;
	printf("%d",w);
	}
	else if(g=='f')
	{w=day*850;
	printf("%d",w);
	}
	}return 0;
	
}

