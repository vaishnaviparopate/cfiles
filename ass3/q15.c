//Accept three integers representing the angles of a triangle in degrees to determine whether they form a valid set of angles of a triangle. If it is not a valid set, then generate a message and terminate the process. If it is a valid set, then the process determines whether it is equiangular (all three angles are the same). It also determines if the triangle is right-angled (has one angle with 90 degrees), obtuse-angled (one angle above 90), or acute-angled (all three angles are below 90 degrees). Finally, it shows the conclusion about the triangle.
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter the number:a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{if (a==b==c)
	{printf("equilateral");
	}
	else if(a==90 || b==90 || c==90)
	{printf("right angled");
	}
	else if(a>90 || b>90 || c>90)
	{printf("obtuse angle");
	}
	else{printf("acute angle");
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}
