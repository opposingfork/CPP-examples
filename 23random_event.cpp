#include <iostream>
#include <ctime>

int main(){

srand(time(NULL));
int randNum = (rand() % 5) + 1;
switch(randNum){
case 1: std::cout << "You are German";
break;
case 2: std::cout << "You are Turkish";
break;
case 3: std::cout << "You are American";
break;
case 4: std::cout << "You are Colombian";
break;
case 5: std::cout << "You are Hungarian";
break;
}
return 0;
}