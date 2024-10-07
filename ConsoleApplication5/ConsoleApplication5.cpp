#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    char str[] = {"(x+1{s=3}()[)"}
    Stack obj1;
    obj1.push(1);
    obj1.push(2);
    obj1.push(3);

    for (int i = 0; i < obj1.length(); i++)
    {
        cout << obj1.pop() << " ";
    }
    if (obj1.length() == 0)
    {
        cout << "Stack id empty \n";
    }
}
