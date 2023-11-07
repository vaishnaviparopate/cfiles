
#include<stdio.h>
int main()
{
int n;
scanf("%d",&number);
digit1 = (number//10000) % 10  
digit2 = (number // 1000) % 10   
digit3 = (number // 100) % 10    
digit4 = (number // 10) % 10     
digit5 = number % 10            

# Swap the third and fourth digits
new_number = digit1 * 10000 + digit2 * 1000 + digit4 * 100 + digit3 * 10 + digit5

print(new_number);
return 0;
}
