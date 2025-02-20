#include "stack.h"
#include<iostream>
	using namespace std;

	stack::stack() {

		top = -1;
		maxstack = 50;
	}

	int stack::Isempty()const {
		return(top == -1);
	}

	int stack::Isfull() const {
		return(top == maxstack - 1);
	}

	void stack::push(int newitem) {
		if (Isfull()) {
			cout << "stack overflow" << endl;
			exit(1);
		}
		top++;
		items[top] = newitem;
	}

	void stack::pop(int& item) {
		if (Isempty()) {
			cout << "stack underflow" << endl;
			exit(1);
		}
		item = items[top];
		top--;
	}

























