#include "Paren.h"
#include <string>

using namespace std;

Paren::Paren() {
    this->child = nullptr;
}
Paren::Paren(Base* child) {
    this->child = child;
}
double Paren::evaluate() {
    return (this->child)->evaluate();
}
string Paren::stringify() {
    string sent = ("(" + (this->child)->stringify() + ")");
    return sent;
}
