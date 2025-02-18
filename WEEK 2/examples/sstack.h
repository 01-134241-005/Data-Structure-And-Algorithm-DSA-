#pragma once
#define MAX_ITEMS 100
typedef int itemtype;
class sstack
{public:
	sstack();
	int Isempty() const;
	int Isfull() const;
	void push(itemtype newitem);
	void pop(itemtype& item);
private:
	int top;
	itemtype items[MAX_ITEMS];

};

