#ifndef CEIL_H
#define CEIL_H

#include"base.hpp"
#include <cmath>
#include <math.h>

class Ceil : public Base{
	private:
		Base* child = nullptr;
	public:
		Ceil();
		Ceil(Base* );
		double evaluate();
		string stringify();
};
#endif
