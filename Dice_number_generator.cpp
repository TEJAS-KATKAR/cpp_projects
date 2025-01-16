#include<iostream>
#include<ctime>

int main(){
     //pseudo-random = not truly ramdom (but close)

  srand(time(NULL));

  int num =(rand() % 6) + 1;
  std::cout << num <<'\n';
  return 0;
}