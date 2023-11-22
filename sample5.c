#include <stdio.h>

int main() {
    int r, c;

    for (r = 1; r <= 7; r++) {
        for (c = 4; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }

    for (r = 7; r >= 1; r--) {
        for (c = 4; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }
}
