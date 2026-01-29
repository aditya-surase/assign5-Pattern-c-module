#include <stdio.h>

int main() {
    int n = 5;  
    int i, j, k;

    for (i = n; i >= 1; i--) {            
        // INNER LOOP 1 → spaces before stars
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // INNER LOOP 2 → stars
        for (k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }

        printf("\n");                       // move to next row
    }

    return 0;
}