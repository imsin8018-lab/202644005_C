#include <stdio.h>

int main() {
    double base, height;
    char ch;

    while (1) {
        printf("Base = ");
        scanf("%lf", &base);
        printf("Height = ");
        scanf("%lf", &height);

        printf("Triangle width = %.1f\n", (base * height) / 2.0);

        printf("Continue? ");
        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}
