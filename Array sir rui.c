#include <stdio.h>

int main()
{
    int size = 5;

    int a;
    int b;
    int c;
    int array [] = {5,5,5,5,5};

    int sum = 0;


    for(a = 1; a <= size; a++)
    {
    for (b= 0; b < size; b++)
    {
        for (c = 5; c <=size; c+=5)
        {
            sum = sum + array[c];
        printf("%d %d %d\n", a, b, sum);
    }
    }
    }
    return 0;

}
