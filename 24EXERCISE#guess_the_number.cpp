#include <iostream> 
#include <ctime>

int main(){
  int num;
  int guess;
  int tries = 0; 
  
  srand(time(NULL));
  num = (rand() % 10) + 1;
  
  std::cout << "GUESS THE NUMBER" << std::endl;
  
  do{
    tries++;
    
    std::cout << "Enter number 1-10: "; 
    std::cin >> guess;
    
    if(guess > num){
      std::cout << "Too high\n";
    }
    else if(guess < num){  
      std::cout << "Too low\n";
    }
    else{
      std::cout << "Correct! Tries: " << tries << std::endl;
    }
    
  }while(guess != num);

  return 0;
}