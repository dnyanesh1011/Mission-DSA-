#include<bits/stdc++.h>
using namespace std;

int main () {

    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    if(s.empty()) {
        cout << "Stack is EMPTY " << endl;
    }
    else{
        cout << " Stack is not EMPTY" << endl;
    }

    cout << "size of stack is " << s.size() << endl;

    return 0;

}