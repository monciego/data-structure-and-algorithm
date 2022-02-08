/*Activity 14*/
#include <stdio.h>

int main()
{
    int numbers [1];

    int a =1;



    printf("Please Enter a Number: ");
    scanf("%d", &numbers);

    while (a <= numbers[0])
    {
        int b=0;
        while (b <numbers[0]){
    printf("%d %d\n", a,b);
    b++;
    }
    a++;

    }
    return 0;

}
