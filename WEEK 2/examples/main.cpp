#include<iostream>
#include "stack.h"
#include "sstack.h"
using namespace std;
int main() {
	sstack s;
	int item;
	for (int i = 0;i < 20;i++) {
		s.push(i);
	}
	for (int i = 0;i < 20;i++) {
		s.pop(item);
		cout << item << endl;
	}
	stack<int> intstack;
	stack<float> floatstack;
	int data;
	float val;
	intstack.push(35);
	floatstack.push(3.12);
	intstack.pop(data);
	cout << data << endl;
	floatstack.pop(val);
	cout << val << endl;

	return 0;
}

