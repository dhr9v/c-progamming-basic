#include <stdio.h>

void main()
{
    int a, b, sum;
    printf("Enter two integers for sum: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);

}