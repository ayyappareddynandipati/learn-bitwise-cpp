#include <bits/stdc++.h>
using namespace std;

// Function to count the number of set bits (1s) in the binary representation of n
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1; // Add 1 to count if the last bit is set
        n >>= 1;        // Shift bits to the right to check the next one
    }
    return count;
}

int main() {
    int n = 13;  // Binary: 00001101

    cout << "Number: " << n << endl;
    cout << "Binary: " << bitset<8>(n) << endl;  // Print binary with 8-bit padding
    cout << "Set Bits: " << countSetBits(n) << endl;  // Should return 3 for 1101

    return 0;
}
