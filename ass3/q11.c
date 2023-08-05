//A certain steel is graded according to the following conditions:
/*(i) Rockwell-hardness > 50
(ii) Carbon content > 0.7
(iii) Tensile strength > 5600 kg/cm2
The steel is graded as follows:
a. Grade 10, if all the conditions are satisfied
b. Grade 9, if conditions (i) and (ii) are satisfied
c. Grade 8, if conditions (ii) and (iii) are satisfied
d. Grade 7, if conditions (i) and (iii) are satisfied
e. Grade 0, otherwise test case a]rockwell- hardness =60,carbon contest=1.8,tensile strength=5660kg/cm2.b]rockwell-hardness=60,carbon content=20,tensile strength=4400kg/cm2.c]rockwll haednss=70,carbon content=2,tensile strength=5668kd/cm2.d]rockwell hardnes=60,carbon content=2,tensile strenth=5686,e]rockwell hardness=5,carbon content=2,tensile strength=440kg/cm2*/
#include<stdio.h>
int main()
{
	int r,t;
	float c;
	scanf("%f",&c);
	printf("enter the number:r,t");
	scanf("%d %d",&r,&t);
	if(r>50 && c>0.7 && t>5600)
	{printf("grade 10");
	}else if(r>50 && c>0.7)
	{printf("grade 9");
	}else if(c>0.7 && t>5600)
	{printf("grade 8");
	}else if(r>50 && t>5600)
	{printf("grade 7");
	}else{
	printf("grade 0");
	}return 0;

}
