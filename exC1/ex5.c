#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Happy.\n");
    } else {
        printf("Lonely.\n");
    }

    return 0;
}
