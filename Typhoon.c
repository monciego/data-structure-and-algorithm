#include <stdio.h>

int main()
{
   int x;
   printf("Enter a typhoon warning signal: ");
   scanf("%d", &x);
   if(x = 1)
   {
       printf("No damage to very light damage");
   }
   else if (x=2)
   {
        printf("Light to moderate damage");
   }
   else if(x=3)
   {
       printf("Moderate to Heavy Damage");
   }
   else if (x=4)
   {
       printf("Heavy to heavy damage");
   }
   else if (x=5)
   {
       printf("Very heavy to widespread damage");
   }
   else
        printf("Typhoon signal does not exist");


return 0;
}
