#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int menu;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select: ");

    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("you selected ADD\n");
            break;
        case 2:
            printf("you selected EDIT\n");
            break;
        case 3:
            printf("you selected DEL\n");
            break;
        default:
            printf("I don't know\n"); // 문제 요구사항에 맞춰 오류 메시지 출력
            break;
    }

    return 0;
}