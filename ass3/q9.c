//the grade in certain class are determined by coursework and a written examination both component of the assessment carry a maximium of 50 points.1]a student must score a total of 45% or more in order to pass.2]a total grade of 44% is moderated to 45%.3]each component must be passed with a minimum of 20 points.4]if a student scores 45% or more but does not achieve the minimumgrade in one component he is given a technical fail of 44% which is not moderated to 45%.print whether the student has passed or failed and also the coure totale.
#include<stdio.h>
int main()
{
	int CW,WE,t;
	printf("enter the number:CW,WE");
	scanf("%d %d",&CW,&WE);
	t=CW+WE;
	if(CW>=20)
	{
	if(WE>=20)
	{
	if(t>=45)
	{
	printf("pass");
	}
	else if(t<=44)
	{
	printf("moderated pass");
	}
	else{printf("fail");
	}
	}
	else if(t>=45)
	{
	t=44;
	printf("fail");
	}
	else
	{
	printf("fail");
	}
	}
	else if(WE>=20)
	{ 
	if(t>=45)
	{t=44;
	printf("fail");}
	else {printf("fail");
	}
	}
	else{
	printf("fail");
	}
	return 0;
}
