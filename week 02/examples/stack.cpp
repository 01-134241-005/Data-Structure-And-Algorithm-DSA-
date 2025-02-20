#include<iostream>
#include "stack.h"
using namespace std;
template< class itemtype>
stack<itemtype>::stack() {
	maxstack = 500;
	top = -1;
	items = new itemtype[500];
}
template< class itemtype>
stack<itemtype>::stack(int max) {
	maxstack = max;
	top = -1;
	items = new itemtype[max];
}
template< class itemtype>
stack<itemtype>::~stack() {
	delete[]items;
}
template< class itemtype>
int stack<itemtype>::Isempty()const {
	return(top == -1);
}
template< class itemtype>
int stack<itemtype>::Isfull() const{
	return(top == maxstack -1);
}
template< class itemtype>
void stack<itemtype>::push(itemtype newitem) {
	if (Isfull()) {
		cout << "stack overflow" << endl;
		exit(1);
	}
	top++;
	items[top] = newitem;
}
template<class itemtype>
void stack<itemtype>::pop(itemtype& item) {
	if (Isempty()) {
		cout << "stack underflow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}