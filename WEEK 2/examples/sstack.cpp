#include "sstack.h"
#include<iostream>
using namespace std;

sstack::sstack() {
	
	top = -1;
	
}

int sstack::Isempty()const {
	return(top == -1);
}

int sstack::Isfull() const {
	return(top ==MAX_ITEMS- 1);
}

void sstack::push(itemtype newitem) {
	if (Isfull()) {
		cout << "stack overflow" << endl;
		exit(1);
	}
	top++;
	items[top] = newitem;
}

void sstack::pop(itemtype& item) {
	if (Isempty()) {
		cout << "stack underflow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}