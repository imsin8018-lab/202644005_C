#include <stdio.h>

int main() {
    int n;
    int max = -1;
    int min = 101;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n >= 1 && n <= 100) {
            if (max == -1 || n > max) {
                max = n;
            }
            if (min == 101 || n < min) {
                min = n;
            }
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}
