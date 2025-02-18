#pragma once

class stack
{
public:
	stack();
	stack(int max);
	~stack();
	int Isempty() const;
	int Isfull() const;
	void push(int newitem);
	void pop(int& item);
private:
	int top;
	int maxstack;
	int items[];
	
};


