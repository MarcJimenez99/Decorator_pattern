#include "Ceil.h"
#include <math.h>
Ceil :: Ceil(){}
double Ceil :: Ceil2(Base * num){
	if(fmod(num,1) == 0){
	  return num;
	}
	double remain;
	remain = fmod(num, 1);
	double add;
	add = 1 - remain;
	num = num + add;
	return num;
}
