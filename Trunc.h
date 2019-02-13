#ifndef TRUNC_H
#define TRUNC_H

#include "base.hpp"
#include <string>

using namespace std;

class Trunc : public Base {
    protected:
        Base* child;
    public:
        Trunc();
        Trunc(Base* );
        double evaluate();
        string stringify();
};

#endif
