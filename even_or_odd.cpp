#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Check if the least significant bit is 1 (which means the number is odd)
    if (n & 1)
        cout << n << " is ODD" << endl;
    else
        cout << n << " is EVEN" << endl;

    return 0;
}
