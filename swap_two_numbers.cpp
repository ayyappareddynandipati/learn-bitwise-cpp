#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using XOR — no temporary variable needed
    a = a ^ b;  // Step 1: a becomes a ^ b
    b = a ^ b;  // Step 2: b becomes (a ^ b) ^ b → original a
    a = a ^ b;  // Step 3: a becomes (a ^ b) ^ a → original b

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
// This code swaps two numbers using the XOR bitwise operator without needing a temporary variable.