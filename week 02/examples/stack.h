#pragma once
template<class itemtype>
class stack
{public:
	stack();
	stack(int max);
	~stack();
	int Isempty() const;
	int Isfull() const;
	void push(itemtype newitem);
	void pop(itemtype& item);
private:
	int top;
	int maxstack;
	itemtype* items;
};

