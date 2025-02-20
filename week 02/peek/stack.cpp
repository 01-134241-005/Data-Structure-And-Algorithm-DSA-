#include "stack.h"
#include <iostream>
using namespace std;


    Stack::Stack() {
        top = -1;
    }

    void Stack:: Push(int value) {
        if (top >= 99) {
            cout << "Stack Overflow\n";
        }
        else {
            arr[++top] = value;
        }
    }

    void Stack:: Pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
        }
        else {
            top--;
        }
    }
    int Stack::Peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        else {
            return arr[top];
        }
    }

    bool Stack::IsEmpty() {
        return (top < 0);
    }

