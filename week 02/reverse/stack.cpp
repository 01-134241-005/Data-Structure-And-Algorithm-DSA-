#include "stack.h"
CharStack::CharStack() {
    top = -1;
}

void CharStack:: Push(char value) {
    if (top >= 99) {
        cout << "Stack Overflow\n";
    }
    else {
        arr[++top] = value;
    }
}

void CharStack::Pop() {
    if (top < 0) {
        cout << "Stack Underflow\n";
    }
    else {
        top--;
    }
}

char CharStack::Peek() {
    if (top < 0) {
        cout << "Stack is Empty\n";
        return '\0';
    }
    else {
        return arr[top];
    }
}

bool CharStack:: IsEmpty() {
    return (top < 0);
}
void CharStack:: ReverseString(char str[]) {
    CharStack s;
    int n = strlen(str);

    
    for (int i = 0; i < n; i++) {
        s.Push(str[i]);
    }

   
    for (int i = 0; i < n; i++) {
        str[i] = s.Peek();
        s.Pop();
    }
}