#include "head.h"

int NOD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long NOD(long a, long b) {
    if (b == 0)
        return a;
    return NOD(b, a % b);
}

int NOD(float a, float b) {
    int intA = static_cast<int>(std::round(a));
    int intB = static_cast<int>(std::round(b));
    return NOD(intA, intB);
}

int NOD(double a, double b) {
    int intA = static_cast<int>(std::round(a));
    int intB = static_cast<int>(std::round(b));
    return NOD(intA, intB);
}
