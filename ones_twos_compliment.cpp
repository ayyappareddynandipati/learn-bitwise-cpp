#include <bits/stdc++.h>
using namespace std;

// Function to compute 1's complement
string onesComplement(string bin) {
    for (char &bit : bin)
        bit = (bit == '0') ? '1' : '0';
    return bin;
}

// Function to compute 2's complement
string twosComplement(string bin) {
    string ones = onesComplement(bin);
    int n = ones.size();
    // Add 1 to the 1's complement
    for (int i = n - 1; i >= 0; i--) {
        if (ones[i] == '0') {
            ones[i] = '1';
            break;
        } else {
            ones[i] = '0';
        }
    }
    return ones;
}

int main() {
    string binary = "00000101"; // binary for 5
    cout << "Original:      " << binary << endl;
    cout << "1's Complement: " << onesComplement(binary) << endl;
    cout << "2's Complement: " << twosComplement(binary) << endl;
}
// This code computes the 1's and 2's complement of a binary number
// and prints the results. The 1's complement flips all bits,