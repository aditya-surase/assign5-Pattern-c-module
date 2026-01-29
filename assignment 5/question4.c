#include <stdio.h>

int main() {
    int n = 5;   
    int i, j, k;

    // OUTER LOOP → rows
    for (i = 1; i <= n; i++) {

        // INNER LOOP 1 → spaces before stars
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // INNER LOOP 2 → stars
        for (k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }

        // Move to next row
        printf("\n");
    }

    return 0;
}