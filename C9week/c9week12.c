#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // 1단계: 양수인지 확인
    if (num > 0)
    {
        // 2단계: 짝수인지 홀수인지 확인
        if (num % 2 == 0)
        {
            printf("Even Number\n");
        }
        else
        {
            printf("Odd Number\n");
        }
    }
    // 양수가 아닌 경우 (0 이하)
    else
    {
        printf("Non positive\n");
    }

    return 0;
}