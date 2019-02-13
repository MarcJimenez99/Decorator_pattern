#ifndef PAREN_H
#define PAREN_H

#include "base.hpp"
#include <string>

using namespace std;

class Paren : public Base {
    protected:
        Base* child;
    public:
        Paren();
        Paren(Base* );
        double evaluate();
        string stringify();
};

#endif
