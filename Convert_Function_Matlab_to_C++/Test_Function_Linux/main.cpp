
#include <iostream>

#include "leer.h"

using namespace std;

int main(){

    double a, b, c, d;
    c=10;
    d=100;

    leer(c, d, &a, &b);
    cout<<a<<endl;
    cout<<b<<endl;

}
