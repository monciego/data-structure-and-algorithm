#include <stdio.h>

int main()
{
    int array [] = {10,20,30,40,50};

    int size = 5;
    int sample = array [4];

    int location;
    int sum = 0;

    for(location = 0; location <size; location++)
{
    sum = sum + array [location];
}
printf("%d \n",sample);
printf("%d \n", sum);
return 0;
}
