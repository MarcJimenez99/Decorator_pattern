#include "Floor.h"
#include <math.h>

Floor::Floor() {
	this->child = nullptr;
}
Floor::Floor(Base* child) {
	this->child = child;
}
double Floor::evaluate() {
	return floor((this->child)->evaluate());
}
string Floor::stringify() {
	return (this->child)->stringify();
}

