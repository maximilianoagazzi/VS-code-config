#include <stdio.h>
#include "header.h"

int main () {
    int a = 5;
    int b = 11;
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("wow");
    return 0;
}