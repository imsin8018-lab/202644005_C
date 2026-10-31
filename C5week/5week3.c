#include <stdio.h>

int main()
{
    int score_count[11] = {0};
    int score;

    while (1)
    {
        scanf("%d", &score);

        if (score == 0)
        {
            break;
        }

        score_count[score / 10]++;
    }

    for (int i = 10; i >= 1; i--)
    {

        if (score_count[i] > 0)
        {
            printf("%d : %d\n", i * 10, score_count[i]);
        }
    }

    return 0;
}