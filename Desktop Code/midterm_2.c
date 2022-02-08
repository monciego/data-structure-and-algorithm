#include<stdio.h>
int main()
{
    int start, end,num;
    printf("Enter a starting number: ");
    scanf("%d",&start);
    printf("Enter an ending number: ");
    scanf("%d", &end);
    for(start=0; start<=num;start++)
    {
        for(end=0;end>=start;end--)
        {
            printf("%d\t", end);
        }
        printf("%d\n",start);
    }
}
