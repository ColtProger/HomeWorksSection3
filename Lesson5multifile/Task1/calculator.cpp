#include "calculator.h"

int summation(int x, int y) {
    return x + y;
}

int difference(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x *y;
}


int division(int x, int y) {
    return x /y;
}

int pow(int x, int y) {
    int result;
    result = 1;
    for (int i = 0; i <y; i++) {
        result *= x;
    }
    return result;
}