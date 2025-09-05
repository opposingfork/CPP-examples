#include <iostream>

int main(){
int age;
std::cout << "Enter your age: ";
std::cin >> age;

if(age >= 18){
std::cout << "You are too tall.";
}
else if(age >= 18){
std::cout << "You are underage";
}
else{
std::cout << "You are an adult";
}
return 0;
}
