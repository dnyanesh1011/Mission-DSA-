#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: "; // Added prompt for clarity
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0) {
        int bit = n & 1;
        ans += (bit * (1 * pow(10, i))); // Using multiplication directly for clarity
        n >>= 1; // Right shift
        i++;
    }

    cout << "Binary equivalent is: " << ans << endl; // Improved output message
    return 0;
}
