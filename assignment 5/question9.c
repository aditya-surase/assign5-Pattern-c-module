#include <stdio.h>

int main() {
    int n = 4;     
    int i, j;

    for (i = 1; i <= n; i++) {         
        for (j = 1; j <= n; j++) {     

            // Print star if first row, last row, first column, or last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");          
            }

        }
        printf("\n");                  
    }

    return 0;
}