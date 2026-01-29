#include <stdio.h>

int main() {
    int n = 5;      
    int i, j;

    // OUTER LOOP → rows
    for (i = 1; i <= n; i++) {

        // INNER LOOP → numbers in current row
        for (j = 1; j <= i; j++) {
            printf("%d", j);  // print number
        }

        printf("\n");          // move to next row
    }

    return 0;
}