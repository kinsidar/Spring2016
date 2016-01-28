#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("\n%d is a positive number\n", num);
    else
        printf("\n%d is a negative number\n", num);

    return 0;
}
