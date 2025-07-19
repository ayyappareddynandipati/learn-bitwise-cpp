#include <bits/stdc++.h>
using namespace std;

// Function to check if the i-th bit in number n is set (1) or not (0)
void checkBit(int n, int i) {
    // Shift 1 to the left by i positions, then perform bitwise AND with n
    if (n & (1 << i))
        cout << "Bit " << i << " is SET (1)\n";
    else
        cout << "Bit " << i << " is NOT SET (0)\n";
}

int main() {
    int n = 13;  // Binary: 00001101
    int i = 1;   // We're checking the 2nd bit from the right (0-based index)

    // Print the number in binary for visual reference
    cout << "Number: " << n << " (Binary: " << bitset<8>(n) << ")\n";

    checkBit(n, i);  // Check if the i-th bit is set
}
