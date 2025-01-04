// fibonacci.cpp
#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Sequence:\n");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int getNthFibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    int t1 = 0, t2 = 1, nextTerm;
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return t1;
}
