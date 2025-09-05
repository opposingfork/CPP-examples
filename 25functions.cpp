#include <iostream>
// creating function outside main function
void greeting(std::string name, int age){
std::cout << "Hello " << name << ". You are " << age << std::endl;
}

int main(){
std::string name = "buddy";
int age = 25;
// calling the function
greeting(name, age);
return 0;
}

// if you want to add a new function AFTER the main function, declare it before the main function like this: void greeting();
// you can declare used variables inside the brackets
