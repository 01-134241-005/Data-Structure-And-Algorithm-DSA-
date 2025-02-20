#pragma once

    class Stack {
        int top;
        int arr[100];
    public:
        Stack();
        void Push(int value);
        void Pop();
        int Peek();
        bool IsEmpty();
        
    
};

