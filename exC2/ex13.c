#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    while (1) {
        printf("%d\n", x);
        x++;
        if (x > 8) {
            break;
        }
    }

    return 0;
}
