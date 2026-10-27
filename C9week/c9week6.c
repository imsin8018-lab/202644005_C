#include <stdio.h>

int main()
{   
    int num2;
    int num;

    
    scanf("%d", &num);

    num2 = (20 - num);


    if (num >= 20)
    {
        printf("adult\n");
    }
    else
    {
        printf("%d years later\n", num2);
    }

    return 0;
}