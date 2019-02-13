#ifndef ABS_H
#define ABS_H

#include "base.hpp"
#include <cmath>
#include <math.h>

using namespace std;

class Abs : public Base{
	private:
		Base* child = nullptr;
	public:
		Abs();
		Abs(Base* );
		double evaluate();
		string stringify();
};
#endif
