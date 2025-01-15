#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    
    // Calculate the hypotenuse
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Display the result
    std::cout << "The Hypotenuse is " << c << '\n';
    
    return 0;
}
