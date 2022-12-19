// Bitwise Operators

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int and, or, xor, ls, rs;

    printf("Enter 2 number: ");
    scanf("%d %d", &a, &b);

    and = a & b;
    or = a | b;
    xor = a ^ b;
    ls = a << b; // a * (2 ^ b)
    rs = a >> b; // a / (2 ^ b)

    printf("AND: %d\n", and);
    printf("OR: %d\n", or);
    printf("XOR: %d\n", xor);
    printf("LEFT SHIFT: %d\n", ls);
    printf("RIGHT SHIFT: %d\n", rs);
    return 0;
}
