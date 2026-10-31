#include <stdio.h>

int main()
{   
    int num;
    int weight;
    int height;

    scanf("%d", &height);
    scanf("%d", &weight);

    num = (weight + 100 - height);
    printf("%d\n", num);

    if (num > 0)
    {
        printf("Obesity\n");
        printf("Need control");
    }

    return 0;
}