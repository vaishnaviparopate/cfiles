/*print string
#include<stdio.h>
#include<string.h>
int main()
{
char str[]="i am vaishnavi";
printf("%s",str);
return 0;	
}
*/


/*change frist name
#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="physics wallah";
	str[0]='d';
	printf("%s",str);
	return 0;
}

*/

#include<stdio.h>
#include<string.h>
int main()
{
 char *ptr="vaishnavi paropate";
 printf("%s",ptr);
 *ptr="vaishnavi siddheshwar paropate";
 printf("%s",ptr);
 return 0;
}
