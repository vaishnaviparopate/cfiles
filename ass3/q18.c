//find second max of 3 number(use minimum number of comparision).
#include<stdio.h>
int main()
{
	int a,b,c,max,smax;
	printf("enter the number:a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{max=a;
	smax=b;
	}
	else{max=b;
	smax=a;
	}
	 if(max>c)
	{printf("%d\n",max);
	}
	else{
	printf("%d",c);
	}
	return 0;
}
