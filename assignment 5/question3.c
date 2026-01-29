#include <stdio.h>

int main() {
    int n = 5;      
    int i, j;

    // OUTER LOOP → rows
    for (i = n; i >= 1; i--) {          
        // INNER LOOP → stars
        for (j = 1; j <= i; j++) {      
            printf("*");
        }
        printf("\n");                   // new line after each row
    }

    return 0;
}