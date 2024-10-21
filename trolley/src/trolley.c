
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float left, right;

    while (1)
    {

        printf("Please enter the cost of going left: ");
        if (scanf("%f", &left) == EOF)
        {
            return 0;
        }

        printf("Please enter the cost of going right: ");
        if (scanf("%f", &right) != 1)
        {
            return 1;
        }

        if (left < right)
        {
            printf("Go left\n");
        }
        else if (left > right)
        {
            printf("Go right\n");
        }
        else
        {
            printf("Go left\n");
        }
    }

    return 0;
}
