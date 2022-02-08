#include<stdio.h>
void main()
{
int i, code= 1234, pass= 4321;
for (i=0 ; i<= code ; i++)
{
  printf("Enter Passcode 1:", code);
  scanf("%d", &i);
  if(i == code)
  {
    for (i=0 ; i<= pass ; i++)
{
  printf("Enter Passcode 2:", pass);
  scanf("%d", &i);

  }

  printf("Welcome Guest");
}
}

}
