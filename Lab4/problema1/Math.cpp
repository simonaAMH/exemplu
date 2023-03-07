#include <stdarg.h>
#include "Math.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h> 


int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add1(int a, int b, int c) {
    return a + b + c;
}

double Math::Add2(double a, double b) {
    return a + b;
}

double Math::Add3(double a, double b, double c) {
    return a + b + c;
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul1(int a, int b, int c) {
    return a * b * c;
}

double Math::Mul2(double a, double b) {
    return a * b;
}

double Math::Mul3(double a, double b, double c) {
    return a * b * c;
}

int Math::Add4(int count, ...) {
    va_list vl;
    int sum = 0;
    va_start(vl, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(vl, int);
    }
    va_end(vl);
    return sum;
}

char* Math::Add5(const char* a, const char* b) {
    if (a == nullptr || b == nullptr) {
        return nullptr;
    }
    int len_a = strlen(a);
    int len_b = strlen(b);
    char* result = new char[len_a + len_b + 1];
    strcpy_s(result, len_a + len_b + 1, a);
    strcat_s(result, len_a + len_b + 1, b);
    return result;
}
