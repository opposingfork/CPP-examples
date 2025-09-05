#include <iostream>

// switch - alternative to using many else if statements

int main(){

int month;
std::cout << "Enter the month" << std::endl;
std::cin >> month;

switch(month){
case 1:
std::cout << "january";
break;
case 2:
std::cout << "febraury";
break;
case 3:
std::cout << "march";
break;
case 4:
std::cout << "april";
break;
case 5:
std::cout << "may";
break;
case 6:
std::cout << "june";
break;
case 7:
std::cout << "july";
break;
case 8:
std::cout << "august";
break;
case 9:
std::cout << "september";
break;
case 10:
std::cout << "october";
break;
case 11:
std::cout << "november";
break;
case 12:
std::cout << "december";
break;
default:
std::cout << "invalid month";
}

return 0;
}