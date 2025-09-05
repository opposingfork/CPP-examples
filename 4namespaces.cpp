#include <iostream>
// Namespace = provides a solution for preventing name conflicts. A namespace allows for identically named entities as long as the namespaces are different.
namespace first{
int x = 1;
}
namespace second{
int x = 2;
}

int main(){
// using namespace first;
int x = 0;
std::cout << x;
std::cout << first::x;
std::cout << second::x;
return 0;
}


int main(){
using namespace std;
string name = "Buddy";
cout << name;
}