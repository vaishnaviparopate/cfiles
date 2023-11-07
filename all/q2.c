#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	
	scanf("%[^\n]s",str);
	
	int size=0;
	int k=0;
	
	while(str[k]!='\0')
	{
	size++;
	k++;
	}
	printf("size =%d",size);
	printf("\n");
	for(int i=0,j=size-1; i<=j; i++,j--)
	{
	int temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	}
	printf("%s",str);
	return 0;
}
