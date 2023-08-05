//accept the number of days from the user and calculate the charge for the library according to the following.
#include<stdio.h>
int main()
{
int day,c;
printf("enter the number:day");
scanf("%d",&day);
if(day<=5)
{c=day*2;
printf("%d",c);
}
else if(day<=10)
{c=day*3;
printf("%d",c);
}
else if(day<=15)
{c=day*5;
printf("%d",c);
}
else{printf("invalid");
}
return 0;
}
