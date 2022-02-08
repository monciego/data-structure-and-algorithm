#include<stdio.h>
void main()
{
    int year=year+1;
    float a,b,c,d,e,f;

    printf("Enter year:"); scanf("%d",&year);

    printf("enter the population of city A:");scanf("%f", &a);
    printf("enter the population of city B:");scanf("%f", &b);

    printf("enter the Growth Rate of city A:");scanf("%f", &c);
    printf("enter the Growth Rate of city B:");scanf("%f", &d);

    printf("=================================================================\n");
    printf("Year\t population A \t population B\n");
    printf("=================================================================\n");
    printf("\n%d\t\t%.2f\t\t%.2f",year,a,b);
    while( a<b)
    {
        e=c/100;
        e=a*e;
        a=a+e;

        f=d/100;
        f=b*f;
        b=b+f;
        year++;
        printf("\n%d\t\t%.2f\t\t%.2f",year,a,b);

    }

}
