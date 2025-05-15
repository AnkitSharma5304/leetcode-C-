#include <iostream>
#include <string>
#include <cmath>

// Function to convert binary to decimal
int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = 0; i < length; ++i) {
        if (binary[length - 1 - i] == '1') {
            decimal += std::pow(2, i);
        }
    }
    
    return decimal;
}

int main() {
    std::string binaryString;
    
    std::cout << "Enter a binary number: ";
    std::cin >> binaryString;
    
    // Input validation: Ensure the string only contains '0' and '1'
    for (char c : binaryString) {
        if (c != '0' && c != '1') {
            std::cerr << "Invalid binary number!" << std::endl;
            return 1;
        }
    }
    
    int decimalNumber = binaryToDecimal(binaryString);
    
    std::cout << "Decimal representation: " << decimalNumber << std::endl;
    
    return 0;
}
