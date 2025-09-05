#include <iostream>

int main(){
int height;
std::cout << "Enter your height: ";
std::cin >> height;

if(height >= 200){
std::cout << "You are too tall.";
}
else if(height >= 165){
std::cout << "Go to the rollercoaster";
}
else{
std::cout << "You are too short";
}
return 0;
}