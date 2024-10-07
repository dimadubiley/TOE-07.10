#pragma once
class Stack
{
	int* data;
	int size;
public:
	Stack();
	void push(int value);
	int top();
	int pop();
	void print();
};

