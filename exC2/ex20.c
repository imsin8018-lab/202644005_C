#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    do {
        printf("%d\n", x);
        x++;
    } while (x <= 77);

    return 0;
}
