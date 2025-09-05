#include <iostream>
#include <format>

using namespace std;

int main() {
// variables to format in text
  string w = "Hello";
  int v = 409;
  bool t = true;
// writing the formatted text
  cout << format("{0} and {1} and what {2} hello", w, v, t) << endl;
// format("text {var}", varnames)
  return 0;
}