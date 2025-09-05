#include <iostream>
// sizeof() = determines the size in bytes of a: variable, data type, class, objects
int main(){
std::string name = "Bro";
double gpa = 2.5;
char grade = 'F';
char vitamins[] = ['A', 'B', 'C', 'D'];
std::cout << sizeof(gpa) << "bytes \n";
std::cout << sizeof(name) << "bytes \n";
std::cout << sizeof(grade) << "bytes \n";
std::cout << sizeof(vitamins) << "bytes \n";
return 0;
}