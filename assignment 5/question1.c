#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {          // rows
        for (int j = 0; j < n; j++) {      // columns
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}