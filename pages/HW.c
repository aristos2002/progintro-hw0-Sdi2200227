#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long left_cost, right_cost;

    while (1)
    {

        printf("Please enter the cost of going left: ");
        if (scanf("%lld", &left_cost) == EOF)
        {
            return 0;
        }

        printf("Please enter the cost of going right: ");
        if (scanf("%lld", &right_cost) != 1)
        {
            return 1;
        }

        if (left_cost < right_cost)
        {
            printf("Go left\n");
        }
        else if (left_cost > right_cost)
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
