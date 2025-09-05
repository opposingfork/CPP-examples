#include <iostream>

int main(){

for(int i = 1; i <= 3; i++){
  for(int j = 1; j <= 10; j++){
    std::cout << j << std::endl; 
  }
  std::cout << std::endl;
}

int rows, columns;
char symbol;

std::cout << "Rows: ";
std::cin >> rows;

std::cout << "Columns: ";
std::cin >> columns; 

std::cout << "Symbol: ";
std::cin >> symbol;

for(int i = 1; i <= rows; i++){
  for(int j = 1; j <= columns; j++){
   std::cout << symbol;
  }
  std::cout << std::endl;
}

return 0;
}