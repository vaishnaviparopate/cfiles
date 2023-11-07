//1+1/2+1/3+1/4
#include <stdio.h>

int main() {
    int i = 1;
    int n = 4;
    double sum = 0.0;
    
    while (i <= n) {
        sum = sum + (1.0 / i);
        i = i + 1;
    }
    
    printf("%f", sum);
    return 0;
}

