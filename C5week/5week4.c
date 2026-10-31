#include <stdio.h>

int main()
{
    int A,B,C;
    int count[10] = {0};

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    int total = A * B * C;

    while (total > 0)
    {
        int digit = total % 10;
        count[digit]++;
        total = total / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}