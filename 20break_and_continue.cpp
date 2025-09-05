#include <iostream>
// break = break out of a loop
// continue = skip current iteration
int main(){
for(int i = 1; i <= 15; i++){
if(i == 13){
continue; // skips 13, if break, it stops at 13
}
std::cout << i << '\n';
}
return 0;
}