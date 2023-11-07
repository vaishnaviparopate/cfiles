/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
	scanf("%d",&a[i]);
	}
	for(int i=0; i<n; i++)
	{
	for(int j=0; j<=a[i]; j++)
	{
	printf("*\n");
	}
	}
	
	return 0;
}*/
/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    // Read n integers into the array a
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Find the maximum value in array a
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    // Print '*' characters vertically for each value in array a
    for (int i = 1; i <= max; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= a[j]) {
                printf("*");
            } else {
                printf(" ");      
            }
            if (j < n - 1) {
                printf(" "); // Add space between columns
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/


#include<stdio.h>
int main()
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
int arr[n];

for (int i=0; i<n; i++)
{
     scanf("%d",&arr[i]);
}
int max=0;
for (int i=0; i<n; i++)
{
    if (arr[i]>max) max=arr[i];
}
/*char  a[max][n];
for (int i=0; i<n;  i++)
{
    for (int j=0; j<n; j++)
    {
        a[i][j]=' ';
    }
}*/
for (int i=0; i<n; i++)
{
      int c=0;
      for (int j=max-1; c<arr[i]; c++)
      {
           if (arr[i]<=0)
           {
               a[j][i]=' ';
               j--;
           }
           else 
           {
           a[j][i]='*';
           j--;
           }
      }
}
for (int i=0; i<max; i++)
{  
    for (int j=0; j<n; j++)
    {
         printf("%c ",a[i][j]);
    }
    printf("\n");
}
return 0;
}
