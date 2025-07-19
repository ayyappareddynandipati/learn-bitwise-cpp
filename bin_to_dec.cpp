#include <bits/stdc++.h>
using namespace std;

int main() {
    int binary = 1011;  // Pretending this is a binary number written as an int
    int decimal = 0, base = 1;

    // Loop runs until all digits are processed
    while (binary > 0) {
        int lastDigit = binary % 10;  // Extract the rightmost digit
        decimal += lastDigit * base;  // Add to the result based on place value
        base *= 2;                    // Move to the next binary position (2^1, 2^2, etc.)
        binary /= 10;                 // Drop the last digit
    }

    cout << decimal; // Output will be 11 (since 1011 in binary = 11 in decimal)
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    string binary = "1011";  // A cleaner and safer way to handle binary input
    int decimal = 0;

    // Traverse the string left to right (MSB to LSB)
    for (char bit : binary) {
        // Shift existing value left (×2) and add current bit
        decimal = decimal * 2 + (bit - '0');  // Convert '0' or '1' to int and accumulate
    }

    cout << decimal; // Output: 11
}
