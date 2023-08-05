//make a flowchart to find duplicate elements
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	printf("enter the number:%d\n",i+1);
	scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i++)
	{
	int j,c=0;
	for( j=0; j<n; j++)
	{
	if(arr[i]==arr[j])
	{
	c=c+1; 
	}
	}
	if(c>=2)
	{int b=arr[i];
	int found=0;
	for(int k=0; k<i; k++)
	{
	if(arr[k]==b);
	{found=1;
	break;
	}
	}
	if(!found)
	{
	printf("\nDuplicate:%d ",b);
	}
	}
	}
	return 0;
}


/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                c = c + 1;
            }
        }
        if (c >= 2) {
            int duplicate = arr[i];
            int found = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == duplicate) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("\nDuplicate: %d ", duplicate);
            }
        }
    }

    return 0;
}*/
