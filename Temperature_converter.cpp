#include <iostream>
int main() {
    char unitFrom, unitTo;
    double temp;

    std::cout << "--------------------------TEMPERATURE CONVERTER---------------------\n";
    std::cout << "What unit are you converting from (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    std::cin >> unitFrom;
    std::cout << "What unit are you converting to (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    std::cin >> unitTo;
    std::cout << "Enter Temperature: ";
    std::cin >> temp;

    if (unitFrom == 'C' || unitFrom == 'c') {
        if (unitTo == 'F' || unitTo == 'f') {
            temp = (1.8 * temp) + 32;
            std::cout << "Temperature in Fahrenheit: " << temp << "F\n";
        } else if (unitTo == 'K' || unitTo == 'k') {
            temp = temp + 273.15;
            std::cout << "Temperature in Kelvin: " << temp << "K\n";
        } else {
            std::cout << "Invalid conversion choice.\n";
        }
    } else if (unitFrom == 'F' || unitFrom == 'f') {
        if (unitTo == 'C' || unitTo == 'c') {
            temp = (temp - 32) / 1.8;
            std::cout << "Temperature in Celsius: " << temp << "C\n";
        } else if (unitTo == 'K' || unitTo == 'k') {
            temp = ((temp - 32) / 1.8) + 273.15;
            std::cout << "Temperature in Kelvin: " << temp << "K\n";
        } else {
            std::cout << "Invalid conversion choice.\n";
        }
    } else if (unitFrom == 'K' || unitFrom == 'k') {
        if (unitTo == 'C' || unitTo == 'c') {
            temp = temp - 273.15;
            std::cout << "Temperature in Celsius: " << temp << "C\n";
        } else if (unitTo == 'F' || unitTo == 'f') {
            temp = (temp - 273.15) * 1.8 + 32;
            std::cout << "Temperature in Fahrenheit: " << temp << "F\n";
        } else {
            std::cout << "Invalid conversion choice.\n";
        }
    } else {
        std::cout << "Invalid input! Please enter 'C', 'F', or 'K' only.\n";
    }

    std::cout << "----------------------------END--------------------------------------\n";
    return 0;
}
