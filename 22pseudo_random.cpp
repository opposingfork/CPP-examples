#include <iostream>
#include <ctime> // required

int main()
// pseudo-random: not fully random, but close

srand(time(NULL));
// generate random number, % chooses the last number in range, +1 is so we don't get 0 in output
int random_number = (rand() % 6) + 1;

std::cout << random_number;

return 0;
}