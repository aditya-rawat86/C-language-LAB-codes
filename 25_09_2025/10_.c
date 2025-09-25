/*write a program to calculate the factoriial of a number using recusion*/

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

#include <stdio.h>
    int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}
