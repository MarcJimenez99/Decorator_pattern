#ifndef FLOOR_H
#define FLOOR_H

#include "base.hpp"
#include <cmath>
#include <math.h>

class Floor : public Base{
	private:
		Base* child = nullptr;
	public:
		Floor();
		Floor(Base* );
		double evaluate();
		string stringify();
};
#endif	
