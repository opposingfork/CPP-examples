#include <iostream>

int main(){
double x = 3.14;
std::cout << (int) x << std::endl; // output 3 because converted to int

std::cout << (char) 100 << std::endl; // output d. d is 100 in ascii table
return 0;

// now let's use this to make something
int correct = 6;
int total = 10;
double score = correct/(double)total * 100;
std::cout << score << "%" << std::endl;
// need convert total to double or else it divide 0.6/10
}

/* Types of type conversation
Implicit: Automatic
Explicit: Precede value with new data type.. (int) x
*/