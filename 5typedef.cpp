#include <iostream>
#include <vector>

typedef std::string text;

int main(){
// std::string Name; INSTEAD OF THIS
text Name = "Fork";

std::cout << Name << '\n';

return 0;
}

// typedef: a reserved keyword used to create an additional name(alias) for another data type
/* We could replace typedef with "using" keyword, it's better for templates. Example:
using text = std::string;
*/