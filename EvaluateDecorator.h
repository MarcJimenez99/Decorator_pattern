#ifndef EVALUATEDECORATOR_H
#define EVALUATEDECORATOR_H

#include "Decorator.hpp"
#include <math.h>

class EvaluateDecorator : public Decorator {
	public:
		void Ceil(Base*);	
		void Floor(Base*);
		void Abs(Base*);	
};
