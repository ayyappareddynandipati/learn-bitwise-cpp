#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int res = 0, place = 1;

    // Instead of building a string, we're building a binary number in int form (e.g., 111)
    while (n != 0) {
        int bit = n % 2;  // Get the current bit
        res += bit * place;  // Add the bit at its corresponding decimal place
        place *= 10;  // Shift place value (1s → 10s → 100s, etc.)
        n /= 2;
    }

    cout << res;  // Outputs: 111 (same binary as before, but stored as an int)
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    string s = "";

    // Keep dividing the number by 2 and prepending the remainder (bit) to the result string
    while (n != 0) {
        s = char((n % 2) + '0') + s;  // Convert 0/1 to char and add to the front
        n /= 2;  // Move to the next bit
    }

    cout << s;  // Outputs: 111 (binary representation of 7)
}
