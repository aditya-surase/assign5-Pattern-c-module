#include <stdio.h>

int main() {
    int n = 5;     
    int i, j;

    for (i = 1; i <= n; i++) {        // ROW LOOP (1 to 5)
        for (j = 1; j <= i; j++) {    // COLUMN LOOP (1 to current row number)
            printf("*");              // print star
        }
        printf("\n");                 // go to next row
    }

    return 0;
}