#ifndef STRINGIFYDECORATOR_H
#define STRINGIFYDECORATOR_H

#include "Decorator.hpp"

class StringifyDecorator : public Decorator {
	public:
		void Trunc(Base*);
		void Paren(Base*);
};
