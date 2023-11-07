
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0; i<n; i++)
	{
         printf("enter the number:");
         scanf("%d",&arr[i]);
	}
	int b[m];
	for(int j=0; j<m; j++)
	{
	printf("enetr the number:");
	scanf("%d",&b[j]);
	}
	int c[n+m];
	int cindx=0;
        c[cindx]=arr[0];
	for(int i=1; i<n; i++)
	{
	for(int k=0; k<cindx+1; k++)
	{
	if(c[k]!=arr[i])
	{
	c[cindx+1]=arr[i];
	cindx=cindx+1;
	}
	}
	}
	for(int i=0; i<m; i++)
	{for(int k=0;k<cindx; k++)
	{
	if(c[k]!=b[i])
	{
	c[cindx]=b[i];
	cindx=cindx+1;
	}
	}
	}
	for(int i=0; i<cindx; i++)
	{
	printf("%d",c[i]);
	}
	return 0;
}


/*
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("enter the number: ");
        scanf("%d", &arr[i]);
    }
    
    int b[m];
    for (int j = 0; j < m; j++) {
        printf("enter the number: ");
        scanf("%d", &b[j]);
    }
    
    // Merging arrays and removing duplicates
    int c[n + m];
    int cIndex = 0;  // Index for the merged array
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < cIndex; k++) {
            if (c[k] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            c[cIndex++] = arr[i];
        }
    }
    
    for (int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < cIndex; k++) {
            if (c[k] == b[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            c[cIndex++] = b[i];
        }
    }
    
    // Print the merged array
    for (int i = 0; i < cIndex; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}
*/
