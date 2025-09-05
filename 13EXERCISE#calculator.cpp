#include <iostream>

int main(){
char op;
double num1;
double num2;
double result;

std::cout << "Enter operator: ";
std::cin >> op;

std::cout << "Enter number: ";
std::cin >> num1;

std::cout << "Enter number: ";
std::cin >> num2;

switch(op){
case '+':
result = num1 + num2;
std::cout << "result: " << result << std::endl;
break;

case '-':
result = num1 - num2;
std::cout << "result: " << result << std::endl;
break;

case '*':
result = num1 * num2;
std::cout << "result: " << result << std::endl;
break;

case '/':
result = num1 / num2;
std::cout << "result: " << result << std::endl;
break;

default:
std::cout << "invalid operator";
break;
}

return 0;
}