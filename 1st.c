
#include <stdio.h>

int main()
{
    int piont1, piont2, piont3;

    /* Input sides of a triangle */
    printf("Enter three pionts of triangle: ");
    scanf("%d%d%d", &piont1, &piont2, &piont3);

    if(piont1==piont2 && piont2==piont3)
    {
        /* If all sides are equal */
        printf("Equilateral triangle.");
    }
    else if(piont1==piont2 || piont1==piont3 || piont2==piont3)
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.");
    }
    else
    {
        /* If none sides are equal */
        printf("Scalene triangle.");
    }

    return 0;
}
