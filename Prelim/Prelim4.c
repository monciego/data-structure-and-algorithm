#include <stdio.h>
int main()
{
    int number, numbers;

    printf("Enter Number: " );
    scanf("%d",&number);

    for(numbers = 1; numbers <= number; numbers++)
        {
            printf("Hello Universe\n");
        }
        if (numbers%2==0)
        {
            printf("Retry!");

        }
    return 0;
}
break;
