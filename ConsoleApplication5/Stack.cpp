#include "Stack.h"

Stack::Stack()
	: data(nullptr), size(0)
{}

void Stack::push(int value)
{
	delete[]data;
	int new_size = size + 1;
	int* new_data = new int(new_size){};
	data = new int[new_size] {};
	if (data != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			new_data[i] = data[i];
		}
	}
}
int Stack::top()
{
	return data;
}
int Stack::pop()
{
	if (size == 0)
		return -1;
	int result = data[size - 1];
	int new_size = size - 1;
	int* new_data = new int [new_size] {};
	for (int i = 0; i < new_size; i++)
	{
		new_data[i] = data[i];
	}
	delete[] data;
	data = new_data;
	size -= 1;
	return result;
}

int Stack::length()
{
	return size;
}