
#include "pch.h"
#include <iostream>
#include "virtual_function0.h"

using namespace std;

int main()
{
	First*  pointer = new First();
	Base* pointer_copy = pointer;

	pointer->function1();
	pointer->function2();

	pointer_copy->function1();
	pointer_copy->function2();
}