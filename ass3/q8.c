//construct a flowchart to categorize the shape of a quadrilateral as either a square,rhombus,rectangle,parallelogram,having input the length of the four sides and one internal angle.
#include<stdio.h>
int main()
{
int a,b,c,d,i;
printf("enter the number:a,b,c,d,i");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&i);
if(a==b==c==d)
{
if(i==90){
printf("square");
}
else{
printf("rhombus");
}
}else if(a==c)
{if(b==d){
if(i==90)
{printf("rectangle");
}
else{
printf("parallelogram");
}
}else{
printf("irregular quadrilateral");
}
}
else{printf("irregular quadrilateral");
}
return 0;
}
