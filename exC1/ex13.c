#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    switch (ch) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Usually\n");
            break;
        case 'D':
            printf("Effort\n");
            break;
        case 'F':
            printf("Failure\n");
            break;
        default:
            printf("error\n");
            break;
    }

    return 0;
}