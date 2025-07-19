#include <bits/stdc++.h>
using namespace std;

// Function to print all prime factors of a given number
void printPrimeFactors(int n) {
    // Step 1: Handle all even factors (i.e., factor out 2s)
    while ((n & 1) == 0) {  // While n is divisible by 2
        cout << 2 << " ";
        n >>= 1;  // Divide by 2 using bit shift (same as n = n / 2)
    }

    // Step 2: Now that n is odd, check for odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2) {
        // Keep dividing by i while it divides n
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // Step 3: If n is still greater than 2, it's a prime number itself
    if (n > 2)
        cout << n;

    cout << '\n';
}

int main() {
    int n = 17;  // Change this to test different numbers
    cout << "Prime factors of " << n << " are: ";
    printPrimeFactors(n);
    return 0;
}
