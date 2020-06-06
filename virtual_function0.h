#pragma once
#include "virtual_function0.cpp"

class Base {
public:
	virtual void  function1() {
	cout << "Base::function1()" << endl; 
	}
		void function2() {
	cout << "Base::function2()" << endl; 
	}
};

class First : public Base {
public:
	virtual void  function1() {
		cout << " First ::function1()" << endl;
	}
	void  function2() {
		cout << " First ::function2()" << endl;
	}
};