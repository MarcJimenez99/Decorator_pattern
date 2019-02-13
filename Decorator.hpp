#ifndef DECORATOR_H
#define DECORATOR_H

#include "base.hpp"

class Base;

class Decorator : public Base {
        private:
                Base* evaluate_function = nullptr;
                Base* stringify_function = nullptr;
        public:
                Decorator() { };
                Decorator(Base* evaluate, Base* stringify) {
                        this->evaluate_function = evaluate;
                        this->stringify_function = evaluate;
                };
};
		

