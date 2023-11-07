#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	scanf("%[^\n]s",str);
	int size=0;
	int k=0;
	while(str[k]!='\0')
	{
	size++;
	k++;
	}
	printf("size is=%d",size);
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

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int arr2[n];
    for (int i = 0; i < n; i++) {
        // Calculate the new index after rotation
        int newIndex = (i + k) % n;
        arr2[newIndex] = arr[i];
    }
    
    for (int j = 0; j < n; j++) {
        printf("%d ", arr2[j]);
    }
    
    return 0;
}
