#include<stdio.h>
#include<string.h>

int main() {
    int n, m;
    printf("Enter the numbers n and m: ");
    scanf("%d %d", &n, &m);

    char a[n + 1];
    scanf("%s", a);

    char b[m + 1];
    scanf("%s", b);

    int k = 0;
    char c[n + m + 1]; // The size of c should be enough to store all possible matching characters

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                c[k] = a[i];
                k++;
            }
        }
    }
    
    //c[k] = '\0'; // Null-terminate the resulting string

    printf("Common characters: %s\n", c);

    return 0;
}

