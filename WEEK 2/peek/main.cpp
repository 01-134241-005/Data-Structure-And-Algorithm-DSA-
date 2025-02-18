#include<iostream>
#include"stack.h"
using namespace std;

int main() {
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);

    cout << "Top element is: " << s.Peek() << endl;

    s.Pop();
    cout << "After Pop, Top element is: " << s.Peek() << endl;

    return 0;
}
