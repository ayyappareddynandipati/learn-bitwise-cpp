#include <iostream>
#include <vector>
using namespace std;

// Classic Sieve of Eratosthenes to generate all primes up to n
void sieve(int n) {
    // Initialize a boolean array where index represents the number
    // Initially assume all numbers are prime
    vector<bool> isPrime(n + 1, true);

    // 0 and 1 are not prime numbers
    isPrime[0] = isPrime[1] = false;

    // Start checking from 2 up to √n
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            // Mark all multiples of i as not prime
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    // Print all the prime numbers
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i])
            cout << i << " ";
    }
    cout << '\n';
}

int main() {
    int n = 30; // Change this to generate primes up to any number
    cout << "Primes up to " << n << " are: ";
    sieve(n);
    return 0;
}
