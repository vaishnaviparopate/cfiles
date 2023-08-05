//Accept the lengths of the three sides of a triangle to validate whether they can be the sides of a triangle and then classify the triangle as equilateral (all three sides are equal), scalene (all three sides are different), or isosceles (exactly two sides are equal), and then to see whether it is a right-angled triangle (the sum of the squares of two sides is equal to the square of the third side.)
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number:a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && a==c )
	{printf("equilateral");
	}
	else if(a==b || b==c || a==c)
        {printf("isosceles");
        }
        else if(a!=b!=c)
        {printf("scalene");
        }
        else if(a^2+b^2==c^2 || a^2+c^2==b^2 || b^2+c^2==a^2)
        {printf("right angle triangle");
        }
        return 0;
}        
