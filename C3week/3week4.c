#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    int temp = num2;

    
    while (temp > 0) {
        printf("%d\n", num1 * (temp % 10)); 
        temp /= 10;                         
    }

    
    printf("%d\n", num1 * num2);

    return 0;
}