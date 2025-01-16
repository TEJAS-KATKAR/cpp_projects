#include<iostream>
int main(){
  char sign;
  double num1,num2,result;
  std::cout <<"********************calculator**********************"<<'\n';
  std::cout <<"Enter number 1 :=";
  std::cin >> num1;
  std::cout <<"Enter number 2 :=";
  std::cin >> num2;
  std::cout <<"assign ( + ,- ,* ,/ ): ";
  std::cin >> sign;
  
  switch(sign){
    case '+':
      result = num1+num2;
    std::cout <<"Ans:=" << result;
    break;

    case '-':
    result = num1-num2;
    std::cout <<"Ans:=" << result;
    break;

    case '*':
    result = num1 * num2;
    std::cout <<"Ans:=" << result;
    break;

    case '/':
    if(num2 == 0){
      std::cout << "You can't divide by 0";
    }
    else{
    result = num1/num2;
    std::cout <<"Ans:=" << result;
    break;
    }
    default:
    std::cout <<'\n'<< "---ERROR---";
  }
  std::cout <<'\n'<<"***********************END**********************"<<'\n';
  return 0;
}