#include "Ceil.h"

Ceil::Ceil() {
	this->child = nullptr;
}
Ceil::Ceil(Base* child) {
	this->child = child;
}
double Ceil::evaluate() {
	return ceil((this->child)->evaluate());
}
string Ceil::stringify() {
	return (this->child)->stringify();
}
