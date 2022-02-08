#include <Stdio.h>
void main()
{
    int ave, num1, num2, num3;

    printf("Enter First Number: ");
    scanf("%d",&num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Enter Third Number: ");
    scanf("%d",&num3);
ave=(num1+num2+num3)/3;
printf("Average Score is: %d",ave);
    if (ave >= 75)


{
    printf(" \nPassed");
}else{
    printf(" \nFailed");
}

return 0;

}


