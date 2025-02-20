#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class CharStack {
    int top;
    char arr[100];
public:
    CharStack();
    void Push(char value);
    void Pop();
    char Peek();
    bool IsEmpty();
    void ReverseString(char str[]);
};





