/*
#include<stdio.h>
int main()
{
int i=1;
int n=100;
while (i<=n){
printf("%d\n",i);
i++;
}
return 0;
}
*/

/*
#include<stdio.h>
int main()
{
int i;
int n=100;
for(i=1;i<=n;i++){
printf("i=%d\n",i);
}
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
int i=1;
int n=100;
while(i<=n){
 if(i%2==0){
  printf("even= %d\n",i);
 }
 else{
 printf("odd= %d\n",i);
 }
 i++;
 }
 return 0;
 }
*/
 
#include<stdio.h>
int main()
{
int a;
printf("enter a value of a");
scanf("%d",&a);
int i=1;
int s=0;
while(i<=a){
	if(a%i==0){
	s=s+i;
	}
	i++;
}
if(s==a){
printf("perfect no\n");
}
else{
printf("not perfect no\n");
}
return 0;
}
 
/* 
#include<stdio.h>
int main()
{
int n;
printf
*/
