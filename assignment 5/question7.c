#include <stdio.h>

int main() {
    int n = 4;      
    int i, j;
    int num = 1;    

    // OUTER LOOP → rows
    for (i = 1; i <= n; i++) {

        // INNER LOOP → numbers in current row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;      // increment number for next print
        }

        printf("\n");  // move to next row
    }

    return 0;
}