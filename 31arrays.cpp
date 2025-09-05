#include <iostream>
using namespace std;
// array = data structure that holds multiple values, they are accessed by an index number

int main(){
// variable
string car = "Corvette";

cout << car;
// array
string cars[] = {"Corvette", "Mustang", "Limousine"};

cout << cars[0] << "\n";
cout << cars[1] << "\n";
cout << cars[2] << "\n";

cars[0] = "Camaro";
cars[2] = "BMW";

cout << cars[0] << "\n";
cout << cars[1] << "\n";
cout << cars[2] << "\n";

// declare array then set it
string guns[3];

guns[0] = "Pistol";
guns[1] = "Machine Gun";
guns[2] = "Assault Rifle";

cout << guns[0] << "\n";
cout << guns[1] << "\n";
cout << guns[2] << "\n";

return 0;
}