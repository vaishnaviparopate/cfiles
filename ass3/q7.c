//You have denominations of rupee notes in the following form—1, 2, 5, 10, 20, 100, 200, 500, 2000. Take any amount from the user and print the minimum number of notes needed to add up to that number.
#include<stdio.h>
int main()
{
	int note,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	printf("enter the number:note");
	scanf("%d",&note);
	if(note>=2000)
	{c1=note/2000;
	note=note%2000;
	printf("2000=%d\n",c1);
	}
	if(note>=500)
	{c2=note/500;
	note=note%500;
	printf("500=%d\n",c2);
	}
	if(note>=200)
	{c3=note/200;
	note=note%200;
	printf("200=%d\n",c3);
	}
	if(note>=100)
	{c4=note/100;
	note=note%100;
	printf("100=%d\n",c4);
	}
	if(note>=50)
	{c5=note/50;
	note=note%50;
	printf("50=%d\n",c5);
	}
	if(note>=20)
	{c6=note/20;
	note=note%20;
	printf("20=%d\n",c6);
	}
	if(note>=10)
	{c7=note/10;
	note=note%10;
	printf("10=%d\n",c7);
	}
	if(note>=5)
	{c8=note/5;
	note=note%5;
	printf("5=%d\n",c8);
	}
	if(note>=2)
	{c9=note/2;
	note=note%2;
	printf("2=%d\n",c9);
	}
	if(note>=1)
	{c10=note/1;
	note=note%1;
	printf("1=%d\n",c10);
	}
	return 0;
}
