#include<iostream>
#include"stack.h"
using namespace std;

int main() {
    CharStack a;
    char str[] = "HelloWorld";
    cout << "Original String: " << str << endl;

    a.ReverseString(str);
    cout << "Reversed String: " << str << endl;

    return 0;
}
