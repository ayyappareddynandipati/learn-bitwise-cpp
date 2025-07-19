#include <bits/stdc++.h>
using namespace std;

// Adds two numbers without using the '+' operator
int sum(int a, int b) {
    while (b != 0) {
        int carry = a & b;   // carry contains common set bits of a and b
        a = a ^ b;           // XOR gives the sum without the carry
        b = carry << 1;      // shift carry left by 1 so it can be added in next iteration
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    // Guard clause: only handle positive integers for this demo
    if (a < 0 || b < 0) {
        cout << "Please enter only positive integers." << endl;
        return 1;
    }

    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}
// This code computes the sum of two integers without using arithmetic operators.
// It uses bitwise operations to achieve the result, demonstrating a common technique in low-level programming