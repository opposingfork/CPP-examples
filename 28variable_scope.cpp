#include <iostream>
using namespace std;
// Local variables: declared inside a function or block {}
// Global variables: declared outside of all functions
int myNum = 3; // global variable
void printNum();

int main(){
int myNum = 1; // local variable
printNum();
cout << myNum << "\n";
cout << ::myNum << "\n";
return 0;
}

void printNum(){
int myNum = 2; // local variable
cout << myNum << "\n";
cout << ::myNum << "\n"; // using global scope "::"
}


// Note: functions use local vars first. you need global scope "::" before var name to use global var