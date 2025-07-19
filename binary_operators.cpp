#include <bits/stdc++.h>
using namespace std;

// Converts a number to its binary string representation with fixed width (default is 8 bits)
string toBinary(int n, int width = 8) {
    string s = "";
    for (int i = width - 1; i >= 0; i--)
        s += ((n >> i) & 1) ? '1' : '0';  // Grab each bit from MSB to LSB
    return s;
}

int main() {
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    // Print initial values in both decimal and binary
    cout << "a = " << a << " -> " << toBinary(a) << endl;
    cout << "b = " << b << " -> " << toBinary(b) << endl;
    cout << "-----------------------------\n";

    // Bitwise AND: only 1 where both bits are 1
    cout << "a & b = " << (a & b) << " -> " << toBinary(a & b) << " (AND)\n";

    // Bitwise OR: 1 where either bit is 1
    cout << "a | b = " << (a | b) << " -> " << toBinary(a | b) << " (OR)\n";

    // Bitwise XOR: 1 where bits differ
    cout << "a ^ b = " << (a ^ b) << " -> " << toBinary(a ^ b) << " (XOR)\n";

    // Bitwise NOT: flips all bits (note: result is in 2's complement, so output may look odd)
    cout << "~a = " << (~a) << " -> " << toBinary(~a) << " (NOT)\n";

    // Left shift: moves bits to the left, filling with 0s on the right (multiplies by 2)
    cout << "a << 1 = " << (a << 1) << " -> " << toBinary(a << 1) << " (Left Shift)\n";

    // Right shift: moves bits to the right (divides by 2)
    cout << "a >> 1 = " << (a >> 1) << " -> " << toBinary(a >> 1) << " (Right Shift)\n";

    return 0;
}
