#include <stdio.h>

int main() {
    int rows = 5;
    int stars[] = {1, 3, 5, 7, 9};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
