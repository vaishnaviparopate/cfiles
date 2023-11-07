#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int b[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[j]);
        }
        
        int c = (a[0] != 0); // Initialize to 1 if the first day has a non-zero count
        int c1 = (b[0] != 0); // Initialize to 1 if the first day has a non-zero count
        
        for (int i = 1; i < n; i++) {
            if (a[i] != 0) {
                c++;
            } else {
                break;
            }
        }
        
        for (int j = 1; j < n; j++) {
            if (b[j] != 0) {
                c1++;
            } else {
                break;
            }
        }
        
        if (c > c1) {
            printf("Om\n");
        } else if (c == c1) {
            printf("Draw\n");
        } else {
            printf("Addy\n");
        }
    }

    return 0;
}

