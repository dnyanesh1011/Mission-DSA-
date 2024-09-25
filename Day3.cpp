#include<iostream>
using namespace std;

int main() {

    int n = 10; // Number of Fibonacci numbers to print

    int a = 0;
    int b = 1;
    cout << a << " " << b << " "; // Printing the first two Fibonacci numbers

    // Loop should run n-2 times since we already printed the first two numbers
    for(int i = 1; i <= n - 2; i++) {
        
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
    
    return 0;
}
