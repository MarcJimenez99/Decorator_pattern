#include "Abs.h"

Abs :: Abs(){}

double Abs :: Abs2(Base * num){
	if(num >= 0 ){
	  return num;
	}
	num = -num;
}
