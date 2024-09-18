#include <stdio.h>
#include <math.h>
#include "calc.h"

double multiplicacio(double a, double b){
    double c = 0;
    for(int i = 0; i < a; i++){
        c += b;
    }
    return c;
}