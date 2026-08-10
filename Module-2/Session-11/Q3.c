#include <stdio.h>

int main()
{
    int orders[5] = {200, 350, 150, 400, 250};
    int *ptr;
    int i;

    ptr = orders;

    for (i = 0; i < 5; i++)
    {
        printf("Order amount: %d\n", *ptr);
        printf("Address: %p\n\n", (void *)ptr);

        ptr++;
    }

    return 0;
}
