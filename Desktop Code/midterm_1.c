#include <stdio.h>

int main()
{
    int array [] = {1,2,3,4,5,6,7,8,9,10};
    int a;
    int b;
    int sum;
    int size=5;
    int n = size/(n);
    for(a = 1; a <= n; a++)
    {
        for (b= 0; b < n; b++)
            {
                sum = sum + array[b];
                printf(" %d %d %d\n",a, b, sum);
            }
    }
    return 0;
}
