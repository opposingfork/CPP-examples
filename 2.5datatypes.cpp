#include <iostream>
/*
data types:
int: integer
double: decimal numbers
char: single characters, needs single quote
bool: true,false
string: text*/

int main(){
int integer = 10;
double decimal = 1.75;
char character = 'F';
bool boolean = "True";
std::string string = "the quick brown fox jumps over the lazy dog";

std::cout << integer << std::endl;
std::cout << decimal << std::endl;
std::cout << character << std::endl;
std::cout << boolean << std::endl;
std::cout << string << std::endl;
return 0;
}