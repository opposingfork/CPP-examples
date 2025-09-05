#include <iostream>
int main(){
std::string bugs[] = {"ant", "bee", "cockroach", "wasp"};

// this is bad
std::cout << bugs[0] << "\n";
std::cout << bugs[1] << "\n";
std::cout << bugs[2] << "\n";

// this is more efficient
for(int i = 0; i < sizeof(bugs)/sizeof(std::string); i++){
std::cout << bugs[i] << "\n";
}
return 0;
}
