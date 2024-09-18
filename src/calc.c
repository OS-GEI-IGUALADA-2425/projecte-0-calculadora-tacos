#include <stdio.h>
#include <math.h>
#include "calc.h"

double multiplicacio(double a, double b){
    double d = 0;
    for(int i = 0; i < a; i++){
        d += b;
    }
    return d;
}