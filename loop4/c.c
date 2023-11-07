#include <stdio.h>

int main() {
    int n = 5; // The value of n, you can change it as per your requirement

    int i, j, k;
    for (i = n; i >= 1; i--) {
        k = i;
        for (j = 1; j <= n + 2; j++) {
            if (j <= i + 1) {
                printf("%d", k);
                k++;
            } else {
                printf("%d", k);
                k--;
            }
        }printf("\n");
        }return 0;
        }
