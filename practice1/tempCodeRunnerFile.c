#include <stdio.h>

long factorial(int n);

long factorial (int n)
{
    long fac = 1;
    for (int i = n; i >= 1; i--)
        fac = fac * i;
    return fac;
}

int main()
{
    int number;
    printf("정수를 입력하세요: ");
    scanf("%d", &number);
    long result = factorial(number);

    printf("%d! = %ld\n", number, result);

    return 0;
}