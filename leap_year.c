#include<stdio.h>
int main()
{
    int year;
    printf("\nInput the year");
    scanf("%d", &year);
    if(year%4 == 0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}