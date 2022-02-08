#include<stdio.h>
void main()
{
int i, passcode= 1234, passcode2 = 4321, count=3, pass1, pass2;
for (i=1 ; i<= count ; i++)
{
  printf("Enter Passcode 1: ");
  scanf("%d", &pass1);
  if(pass1 == passcode)
  {
    for (i=0 ; i<= count ; i++)
{
  printf("Enter Passcode 2: ");
  scanf("%d", &pass2);
  if (pass2 = passcode2)
{
    printf("Welcome Guest\n");
}
 else
        printf("Wrong Password Attempted");



  }
}
}
}
