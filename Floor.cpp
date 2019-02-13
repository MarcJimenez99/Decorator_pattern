#include "Floor.h"
#include <math.h>
Floor :: Floor(){}

double Floor :: Floor2(Base * num ){	
	if(fmod(num, 1)  == 0){
		return num;
	}
	double remain = fmod(num, 1);
	num = num - remain;
	return num;
}

