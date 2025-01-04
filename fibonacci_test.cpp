// fibonacci_test.cpp
#include <iostream>
#include <cassert>
#include "fibonacci.cpp"

void testGetNthFibonacci(int maxTerms) {
    // Basic tests
    for (int i = 1; i <= maxTerms; ++i) {
        int result = getNthFibonacci(i);
        std::cout << "Fibonacci(" << i << ") = " << result << "\n";

        // Add assertions for the first few known values
        if (i == 1) assert(result == 0);
        if (i == 2) assert(result == 1);
        if (i == 3) assert(result == 1);
        if (i == 4) assert(result == 2);
        if (i == 5) assert(result == 3);
        if (i == 6) assert(result == 5);
        if (i == 7) assert(result == 8);
        if (i == 8) assert(result == 13);
        if (i == 9) assert(result == 21);
        if (i == 10) assert(result == 34);
    }

    std::cout << "All Fibonacci tests passed!\n";
}

int main() {
    int maxTerms;
    std::cout << "Enter the number of Fibonacci terms to test: ";
    std::cin >> maxTerms;
    testGetNthFibonacci(maxTerms);
    return 0;
}
