// fibonacci_test.cpp
#include <iostream>
#include <cassert>
#include "fibonacci.cpp"

void testGetNthFibonacci() {
    // Basic tests
    assert(getNthFibonacci(1) == 0);
    assert(getNthFibonacci(2) == 1);
    assert(getNthFibonacci(3) == 1);
    assert(getNthFibonacci(4) == 2);
    assert(getNthFibonacci(5) == 3);

    // More tests
    assert(getNthFibonacci(10) == 34);
    assert(getNthFibonacci(15) == 377);

    // Edge case tests
    assert(getNthFibonacci(6) == 5);
    assert(getNthFibonacci(7) == 8);

    std::cout << "All Fibonacci tests passed!\n";
}

int main() {
    testGetNthFibonacci();
    return 0;
}
