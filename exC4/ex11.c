#include <stdio.h>

int main() {
    char ch = 'a';
    int n = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }

    return 0;
}
