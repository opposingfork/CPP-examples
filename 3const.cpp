#include <iostream>

// for a variable that you don't want to be changed, add const before it, remember to change the name to UPPERCASE

int main(){
// double pi = 3.14159;,lets make this constant
const double PI = 3.14159;
int radius = 10
circumference = 2 * PI * radius;
std::cout << circumference << "cm";
return 0;
}