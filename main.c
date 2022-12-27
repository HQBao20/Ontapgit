#include <stdio.h>
#include <stdint.h>
#include "sum.h"

int main(void)
{
    uint8_t u_sum = 0;
    uint8_t u_a = 0;
    uint8_t u_b = 0;

    prinf("Nhap a: ");
    scanf("%d", &u_a);
    prinf("Nhap b: ");
    scanf("%d", &u_b);
    u_sum = sum(u_a, u_b);

    return 0;
}