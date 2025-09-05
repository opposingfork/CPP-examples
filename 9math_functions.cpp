#include <iostream>

#include <cmath>

int main(){
double x = 3;
double y = 4;
double z;
double f;
z = std::max(x, y);
std::cout << z;

f = std::min(x, y);
std::cout << f
/*
z = pow(2, 3);  power
z = sqrt(9);   square root
z = abs(-3);  absolute value, turns to positive
z = round(x); round
z = ceil(x); round up
z = floor(x); round down
*/
return 0;
}

// more math functions: https://cplusplus.com/reference/cmath