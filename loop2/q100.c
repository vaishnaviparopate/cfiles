//some of two digits number have the property that the sum of the square of the number equal with the sum of the quare of the number with revers   digit   (for example(48)2+ (52)2+(63)2=(84)2+(25)2+(36)2.contruct the flowchart to show  two digit number.

#include<stdio.h>
int main()
{
	int a,b,c,sum=0,r,m=0,n=0,p=0,add=0;
	printf("enter the number:a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	sum=((a*a)+(b*b)+(c*c));
	while(a>0)
	{
	r=a%10;
	m=m*10+r;
	a=a/10;
	}
	while(b>0)
	{
	r=b%10;
	n=n*10+r;
	b=b/10;
	}
	while(c>0)
	{
	r=c%10;
	p=p*10+r;
	c=c/10;
	}
	add=((m*m)+(n*n)+(p*p));
	if(sum==add)
	{
	printf("%d",add);
	}
	else{
	printf("invalid");
	}
	return 0;
}
