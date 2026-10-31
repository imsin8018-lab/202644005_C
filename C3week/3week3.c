#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    
    printf("%d은(는) %s입니다.\n", num, (num % 2 == 0) ? "짝수" : "홀수");

    return 0;
}