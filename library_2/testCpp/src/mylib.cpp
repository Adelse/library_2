#ifndef TESTCPP_MYLIB_CPP
#define TESTCPP_MYLIB_CPP


int factorial(int x) {
    int result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

#endif
