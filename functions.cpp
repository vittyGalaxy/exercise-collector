/* Definizione delle funzioni utilizzate */
#include <iostream>
#include "functions.h"
using namespace std;

float compute_m(float a, float b)
{
    float d = -a / b;
    return d;
}

float compute_q(float b, float c)
{
    float d = -c / b;
    return d;
}

float eq(float m, float x, float q)
{
    float y = m * x + q;
    return y;
}

int sot(int a, int b)
{
    int s = a - b;
    return s;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

float compute_ohm_law(float R, float i)
{
    float V = R * i;
    return V;
}

float compute_dynamic_law(float m, float a){
    float F = m * a;
    return F;

}


bool comparison(int value, int reference){
    if(value>reference){
        return true;

    }else{
        return false;

    }

}

void identifier(int a , int b){
    int r = a%b;
    for(int count = 0; count <= r-1; count++){
        if(a %2 == 0){
            cout << "Pari" << endl;
        }else{
            cout << "Dispari" << endl;
        }
    }
}