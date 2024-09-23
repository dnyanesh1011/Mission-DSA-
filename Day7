#include<iostream>
using namespace std;

// Function to calculate the factorial of a number 'n'
int factorial(int n) {
    int fact = 1;

    // Loop to calculate factorial of n (n!)
    for(int i = 1; i <= n; i++ ) {
        fact = fact * i;
    }

    return fact;  // Return the factorial of n
}

// Function to calculate nCr (combinations) using the formula: nCr = n! / (r! * (n-r)!)
int nCr(int n, int r) {
    // Calculate the numerator (n!)
    int num = factorial(n);

    // Calculate the denominator (r! * (n-r)!)
    int denom = factorial(r) * factorial(n - r);

    // Return the result of nCr
    return num / denom;
}

int main() {
    int n, r;

    // Take input values for n and r
    cin >> n >> r;

    // Output the result of nCr(n, r)
    cout << "Answer is " << nCr(n, r) << endl;

    return 0;
}
