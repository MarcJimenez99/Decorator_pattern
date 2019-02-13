#include "Floor.h"

Floor :: Floor(){}

double Floor :: Floor2(Base * num ){	
	if(num % 1 == 0){
		return num;
	}
	double remain = num % 1;
	num = num - remain;
	return num;
}

