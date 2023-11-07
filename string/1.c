/*
character printing
#include<stdio.h>
int main()
{
  char arr[5]={'a','t','l','a','s'};
  printf("%c",arr[2]);
  return 0;
}
*/

/*address printing(pointer format in integer)
#include<stdio.h>
int main()
{
int arr[4]={1,2,3,4};
printf("%p\n",&arr[0]);
printf("%p\n",&arr[1]);
printf("%p\n",&arr[2]);
printf("%p\n",&arr[3]);
return 0;
}
*/

/*address printing (in char)
#include<stdio.h>
int main()
{
  char arr[5]={'a','t','l','a','s'};

  printf("%p\n",&arr[0]);
  printf("%p\n",&arr[1]);
  printf("%p\n",&arr[2]);
  printf("%p\n",&arr[3]);
  printf("%p\n",&arr[4]);
  

  return 0;
  }
  */
  
 /* ascii value
 #include<stdio.h>
 int main()
 {
 	char ch='a';
 	int x=(int)ch;
 	printf("%d",ch);
 	return 0;
 }
 */
 
 /*word printing
  #include<stdio.h>
  int main()
  {
  char arr[]={'H','e','l','l','o','\0'};
  int i=0;
  while(arr[i]!='\0')
  {
  printf("%c ",arr[i]);
  i=i+1;
  }
  return 0;
  }
  */
  
 /*hello
  
 #include<stdio.h>
int main()
{
	char arr[]="Hello";
	int i=0;
	while(arr[i]!='\0')
	{
	printf("%c",arr[i]);
	i=i+1;
	}
	return 0;
}
*/ 
 /* 
 #include<stdio.h>
#include<string.h>
int main()
{
char str[]="i am vaishnavi";
printf("%s",str);
return 0;	
} 
*/

/*puts()
 #include<stdio.h>
#include<string.h>
int main()
{
char str[]="i am vaishnavi";
puts(str);
return 0;	
}  
 */
 
 //gets() 
  #include<stdio.h>
#include<string.h>
int main()
{
char str[40];
scanf("%[^\n]s",str);
printf("output is:%s",str);
return 0;	
}   
  
  
  
  
  
  
  
  
  
  
  
  
  
