#include <stdio.h>
#include <math.h>

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base = 2;
    int exponent = 4;
    int result = power(base, exponent);
    printf("Base: %d \nExponent: %d \nResult:%d", base, exponent, result);
}
