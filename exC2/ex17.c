#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int count = 0;

    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            break;
        }
        sum += n;
        count++;
    }

    if (count > 0) {
        printf("sum : %d\n", sum);
        printf("avg : %.1f\n", (double)sum / count);
    }

    return 0;
}
