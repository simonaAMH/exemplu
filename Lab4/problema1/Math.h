#pragma once
class Math
{

public:

    static int Add(int, int);
    static int Add1(int, int, int);
    static double Add2(double, double);
    static double Add3(double, double, double);
    static int Mul(int, int);
    static int Mul1(int, int, int);
    static double Mul2(double, double);
    static double Mul3(double, double, double);
    static int Add4(int count, ...); // sums up a list of integers
    static char* Add5(const char*, const char*);

};