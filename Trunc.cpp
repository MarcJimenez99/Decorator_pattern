#include "Trunc.h"

using namespace std;

Trunc::Trunc() {
    this->child = nullptr;
}
Trunc::Trunc(Base* child) {
    this->child = child;
}
double Trunc::evaluate() {
    return (this->child)->evaluate();
}
string Trunc::stringify() {
    return to_string(this->child->evaluate());
}

