#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){
std::string name;
std::string game;
std::cout << "What is your name?" << std::endl;
std::cin >> name;
std::cout << "Hello " << name << '\n';
// IF MORE THAN ONE WORD
std::cout << "What is your favorite game?" << std::endl;
std::getline(std::cin >> std::ws, game);
std::cout << game << " is very nice";
return 0;
}

// use getline() to extract full strings