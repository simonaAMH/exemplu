#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Math.h"
#include <cstdarg>
#include <stdarg.h>
using namespace std;

int main() {
    Math a;

    printf("Add(1, 2) = %d\n", a.Add(1, 2));
    printf("Add(1, 2, 3) = %d\n", a.Add1(1, 2, 3));
    printf("Add(1.5, 2.7) = %d\n", a.Add2(1.5, 2.7));
    printf("Add(1.5, 2.7, 3.9) = %d\n", a.Add3(1.5, 2.7, 3.9));
    printf("Mul(2, 3) = %d\n", a.Mul(2, 3));
    printf("Mul(2, 3, 4) = %d\n", a.Mul1(2, 3, 4));
    printf("Mul(1.5, 2.7) = %d\n", a.Mul2(1.5, 2.7));
    printf("Mul(1.5, 2.7, 3.9) = %d\n", a.Mul3(1.5, 2.7, 3.9));
    printf("Add(4, 1, 2, 3, 4) = %d\n", a.Add4(4, 1, 2, 3, 4));

    const char* str1  = "Hello";
    const char* str2 = " World";
    const char* rezultat = a.Add5(str1, str2);
    if (rezultat != nullptr) {
        printf("Add(\"%s\", \"%s\") = %s\n", str1, str2, rezultat);
        delete[] rezultat;
    }
    else {
        printf("Unul dintre stringuri este null");
    }

    return 0;
}
