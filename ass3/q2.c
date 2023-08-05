//validate a given year (hint:the year in the date must be greater than zero .the month must lie between 1 and 12 and the day must lie between 31 depending on the month number.)  
#include<stdio.h>
int main()
{
	int y,m,d;
	printf("enter the number:y,m,d");
	scanf("%d %d %d",&y,&m,&d);
	if(y>0){
	if(m>0){
	if(m<=12){
	if(d>0){
	if(d<=31){
	printf("valid year,month,date");
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}




