#include <bits/stdc++.h>
using namespace std;

// Function to compute x raised to the power n (x^n)
// Uses fast exponentiation (a.k.a. binary exponentiation)
double myPow(double x, long long n) {
    if (n == 0) return 1;  // Anything to the power 0 is 1

    bool isNegative = n < 0;
    n = abs(n);  // Work with positive exponent for now

    double result = 1.0;

    // Binary exponentiation: reduces time complexity to O(log n)
    while (n > 0) {
        if (n & 1) result *= x;  // If current bit is set, multiply result
        x *= x;                  // Square the base for next bit
        n >>= 1;                 // Move to next bit (divide n by 2)
    }

    // If exponent was negative, return reciprocal
    return isNegative ? 1.0 / result : result;
}

int main() {
    double x = 2.0;         // Example base
    long long n = -3;       // Example exponent (negative to test inverse logic)

    cout << "Result of " << x << "^" << n << " is: " << myPow(x, n) << '\n';
    return 0;
}
