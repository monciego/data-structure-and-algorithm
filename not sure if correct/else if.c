#include<stdio.h>
void main()
{
    int x, passcode= 1234, password = 4321, i=3, y;
    for(x=1; x<= i; x++)
    {
        printf("Enter Passcode 1 : ", passcode);
        scanf("%d", &y);
            if(x== passcode)
            {
            for(x=1; x<=y; x++)
            {
                printf("Enter Password 2:", password);
                scanf("%d", &y);
            }
            printf("Welcome Guest");
        }
        else if(y!=passcode)
        {
            printf("Attempt\n");
        }
    }
}
