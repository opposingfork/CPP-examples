#include <iostream>
// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

int main(){
int grade = 75;
int number = 5;

grade >= 60 ? std::cout << "You pass!" << std::endl : std::cout << "You fail!" << std::endl;
number % 2 == 0 ? std::cout << "Even" : std::cout << "Odd";

return 0;
}