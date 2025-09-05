#include <iostream>

// foreach loop = loop that eases the traversal over an iterable data set (like an array)
int main(){
std::string letters[] = {"A", "B", "C"};

int nums[] = {65, 72, 92, 16};

for(std::string letter : letters){
std::cout << letter << "\n";
}

for(int num : nums){
std::cout << num << "\n";
}
return 0;
}