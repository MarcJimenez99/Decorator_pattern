#include "Abs.h"

Abs::Abs(){
	this->child = nullptr;
}

Abs::Abs(Base* child) {
	this->child = child;
}
double Abs::evaluate(){
	return fabs((this->child)->evaluate());
}
string Abs::stringify() {
	return (this->child)->stringify();
}
