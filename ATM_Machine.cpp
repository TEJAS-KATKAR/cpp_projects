#include <iostream>

int main(){
  double withdraw = 0.0;
  double deposit = 0.0;
  double balance = 0.0;
  int choice = 0;

  do{
    std::cout << "*********************\n";
    std::cout << "Enter your choice\n";
    std::cout << "*********************\n";
    std::cout << "1. Show balance\n";
    std::cout << "2. Withdraw\n";
    std::cout << "3. Deposit\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter any digit: ";
    std::cin >> choice;

    switch(choice){
      case 1:{
        std::cout << " ___________________________\n";
        std::cout << "| Your balance is: $" << balance << '\n';
        std::cout << "|___________________________|\n";
        break;
      }
      case 2:{
          std::cout << "How much money do you want to withdraw? ";
          std::cin >> withdraw;
          if(withdraw < 0){
              std::cout << "Invalid withdrawal amount! Please enter a positive value.\n";
          }
          else if (withdraw <= balance){
              balance -= withdraw;
              std::cout << "Withdrawal successful! New balance: $" << balance << '\n';
          }
          else{
              std::cout << "Insufficient funds! Your current balance is: $" << balance << '\n';
          }
          break;
      }
      case 3:{
          std::cout << "How much money do you want to deposit? ";
          std::cin >> deposit;
          if(deposit <= 0){
              std::cout << "Invalid deposit amount! Please enter a positive value.\n";
          }
          else{
              balance += deposit;
              std::cout << "Deposit successful! New balance: $" << balance << '\n';
          }
          break;
      }
      case 4:{
          std::cout << "*********************\n";
          std::cout << "Thank you for using the system!\n";
          std::cout << "*********************\n";
          break;
      }
      default:{
          std::cout << "Invalid choice. Please try again.\n";
          break;
      }
    }
  }
while (choice != 4);

  return 0;
}
