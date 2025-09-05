#include <iostream>

int main()
{
double temp;
char unit;
std::cout << "Choose a unit: ";
std::cin >> unit;

if(unit == 'F' || unit == 'f'){
std::cout << "Enter the temp in Celsius";
std::cin >> temp;

temp = (1.8 * temp) + 32;
std::cout << "temp is: " << temp << "F" << std::endl;
}
else if(unit == 'C' || unit == 'c'){
std::cout << "Enter the temp in Fahrenheit";
std::cin >> temp;

temp = (temp - 32) / 1.8;
std::cout << "temp is: " << temp << "C" << std::endl;
}
else{
std::cout << "Enter only C or F";
}
return 0;
}