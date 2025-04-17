#include <stdio.h>
#include "operations.h"

int main() {
    int a = 5, b = 3;
    printf("Addition : %d + %d = %d\n", a, b, addition(a, b));
    printf("Soustraction : %d - %d = %d\n", a, b, soustraction(a, b));
    return 0;
}
