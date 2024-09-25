#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number: "; // Added prompt for clarity
    cin >> n;

    int i = 0, ans = 0;

    while (n != 0) {
        int digit = n % 10;

        if (digit == 1) {
            ans += pow(2, i);
        }

        n /= 10; // Use shorthand for division
        i++;
    }

    cout << "Decimal equivalent: " << ans << endl; // Improved output message
    return 0;
}
