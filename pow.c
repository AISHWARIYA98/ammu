#include <stdio.h>

int main()
{
    int base, exponent;
    int result = 1;
    
    scanf("%d %d", &base,&exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("%d", result);
    return 0;
}
