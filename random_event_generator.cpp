#include<iostream>
#include<ctime>
int main(){
  srand(time(0));
  int randnum = rand() % 5 + 1;

  switch(randnum){
    case 1: std::cout << "You win a bumper sticker!\n";
      break;
    case 2: std::cout << "You win a Trip to london!\n";
      break;
    case 3: std::cout << "You win a Golden ticket!\n";
      break;
    case 4: std::cout << "You win a car!\n";
      break;
    case 5: std::cout << "You win a 5000$!\n";
      break;
  }
  return 0;
}