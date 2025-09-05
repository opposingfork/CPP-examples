#include <iostream>
// && - check if conditions are true
// || - check if one of conditions are true
// ! - reverses the logical state of its operand
int main(){
int temp;

std::cout << "Enter temperature: ";
std::cin >> temp;

if(temp > 0 && temp < 30){
std::cout << "The temperature is good" << std::endl;
}
else{
std::cout << "The temperature is bad" << std::endl;
}

if(temp <= 0 || temp >= 30){
std::cout << "The temperature is bad" << std::endl;
}
else{
std::cout << "Th temperature is good" << std::endl;
}

bool state = true;
if(state){
std::cout << "Good" << std::endl;
}
else{
std::cout << "Bad" << std::endl;
}

if(!state){
std::cout << "Good" << std::endl;
}
else{
std::cout << "Bad" << std::endl;
}

return 0;
}