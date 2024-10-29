#include <iostream>
#include <stack>
using namespace std;

class Stack {
    // properties
    public:
    int *arr;
    int top;
    int size;

    // behavior
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
    if (size - top > 1) {
        top++;
        arr[top] = element;
    }
    else{
        cout << "Stack Overflow" << endl;
    }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);

    // Fill stack to capacity
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if (st.isEmpty()) {
        cout << "Stack is EMPTY" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }
    st.push(13);
    

    // //creation of stack
    // stack<int> s;

    // //push operation
    // s.push(2);
    // s.push(3);

    // //pop operation
    // s.pop();

    // cout << "Printing top element " << s.top() << endl;

    // if(s.empty()) {
    //     cout << "Stack is EMPTY " << endl;
    // }
    // else{
    //     cout << " Stack is not EMPTY" << endl;
    // }

    // cout << "size of stack is " << s.size() << endl;;
}