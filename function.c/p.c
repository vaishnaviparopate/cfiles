/*pointer
#include<stdio.h>
int main()
{
	int a=5;
	int* x=&a;
	printf("%d",*x);
	return 0;
}
*/


#include<stdio.h>
int main()
{
	int a=5;
	int* x=&a;
	*x=7;
	printf("%d",*x);
	return 0;
}
