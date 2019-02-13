#include "base.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.cpp"
#include "Op.cpp"
#include "container.hpp"
#include "ListContainer.cpp"
#include "sort.hpp"
#include "bubble.cpp"
#include "VectorContainer.cpp"
#include "SelectionSort.cpp"
#include "Decorator.hpp"
#include "Abs.cpp"
#include "Floor.cpp"
#include "Ceil.cpp"
#include "Trunc.cpp"
#include "Paren.cpp"
#include <list>
//#include <vector>
#include <iostream>
#include <string>

using namespace std; 

int main() {
	
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Mult* TreeA = new Mult(seven, four);

	Op* three = new Op(3);
	Add* TreeB = new Add(three, TreeA);

	Trunc* Truncate = new Trunc(TreeA);
	cout << "Testing Truncate: " << endl;
	cout << "Before Truncate: ";
	cout << TreeA->stringify() << endl;
	cout << "After Truncate: ";
	cout << Truncate->stringify() << endl;
	cout << endl;
	
	Paren* Parenthesis = new Paren(TreeA);
	cout << "Testing Parenthesis: " << endl;
	cout << "Before Parenthesis: ";
	cout << TreeA->stringify() << endl;
	cout << "After Parenthesis ";
	cout << Parenthesis->stringify() << endl;
	cout << endl;	

	Op* negSeven = new Op(-7.2);
	Op* one = new Op(1);
	Mult* TreeC = new Mult(negSeven, one);

	Op* two = new Op(2);
	Add* TreeD = new Add(two, TreeC);

	Abs* abs = new Abs(TreeC);
	Floor* floor = new Floor(TreeC);
	Ceil* ceil = new Ceil(TreeC);

	cout << "Testing Absolute Value/Floor/Ceiling: " << endl;
	cout << "Before Functions: " << endl;
	cout << TreeC->evaluate() << endl;
	cout << "After Absolute Value: " << endl;
	cout << abs->evaluate() << endl;
	cout << endl;

	cout << "After Floor: " << endl;
	cout << floor->evaluate() << endl << endl;
	
	cout << "After Ceiling: " << endl;
	cout << ceil->evaluate() << endl << endl;

	return 0;
}
