#include <iostream>

double square(double length);

int main(){
double length = 5.0;
double area = square(length);
std::cout << "Area: " << area << "cm²\n";
return 0;
}
// we will show the square of the number
double square(double length){
double result = length * length;
return result;
// or: "return length * length;"
}

// we need to replace void with the data type of result