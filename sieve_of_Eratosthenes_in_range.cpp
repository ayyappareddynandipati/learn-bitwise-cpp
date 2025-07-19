#include <bits/stdc++.h>
using namespace std;

// Function to count the number of prime numbers in the range [L, R)
int countPrimes(int L, int R) {
    int cnt = 0;

    // Boolean vector to mark primality up to R
    vector<bool> isPrime(R + 1, true);

    // 0 and 1 are not primes
    isPrime[0] = false;
    isPrime[1] = false;

    // Sieve of Eratosthenes to mark non-prime numbers
    for (int i = 2; i * i <= R; ++i) {
        if (isPrime[i]) {
            // Mark all multiples of i as non-prime
            for (int j = i * i; j <= R; j += i)
                isPrime[j] = false;
        }
    }

    // Count primes in the given range [L, R)
    for (int i = max(L, 2); i < R; ++i) {
        if (isPrime[i]) cnt++;
    }

    return cnt;
}

int main() {
    int L = 10, R = 50;

    cout << "Number of primes between " << L << " and " << R << " is: ";
    cout << countPrimes(L, R) << endl;

    return 0;
}
