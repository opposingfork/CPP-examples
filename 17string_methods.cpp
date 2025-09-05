#include <iostream>

int main(){
std::string name; 

std::cout << "Enter your name: " << std::endl;

std::getline(std::cin, name);

std::cout << "Length: " << name.length()
return 0;
}

/*
name.length() - Returns length of string 
   Example: int len = name.length();

name.empty() - Checks if string is empty
   Example: if(name.empty()) cout<<"Name is empty"; 

name.clear() - Clears all characters in string
   Example: name.clear();

name.append("Text") - Adds string at the end  
   Example: name.append(" Jr");
   
name.at(0) - Returns character at index
   Example: char c = name.at(0);
   
name.insert(0, "@") - Inserts char at index  
   Example: name.insert(0, "@");
   
name.find(' ') - Finds index of character
   Example: int i = name.find(' ');
   
name.erase(0, 3) - Erases char from index  
   Example: name.erase(0, 3);
   
name.front() - Access first character
name.back() - Access last character
name.assign() - Assigns value to string
name.replace() - Replaces from string
name.push_back('c') - Adds character at the end
name.pop_back() - Removes last character
name.substr(1,3) - Returns substring 
name.compare() - Compares two strings
name.copy() - Copies string  
name.swap() - Swaps contents of two strings
name += "text" - Concatenates string  
name + "text" - Concatenates and returns new string
name == "text" - Compares strings
name[i] - Access character using index   
name.begin() - Returns iterator to beginning
name.end() - Returns iterator to end
name.resize(5) - Resizes string
name.resize(5, 'c') - Resizes and fills with character
name.capacity() - Returns currently allocated capacity
name.reserve(10) - Reserves storage capacity
name.shrink_to_fit() - Reduces capacity to size
*/