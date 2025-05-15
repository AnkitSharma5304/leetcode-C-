#include <iostream>
#include <string>
#include <algorithm>

// Function to convert decimal to binary
std::string decimalToBinary(int n) {
    std::string binary;
    
    // Edge case for 0
    if (n == 0) {
        return "0";
    }
    
    while (n > 0) {
        int remainder = n % 2;
        binary += std::to_string(remainder);
        n /= 2;
    }
    
    // The binary string is in reverse order
    std::reverse(binary.begin(), binary.end());
    
    return binary;
}

int main() {
    int decimalNumber;
    
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;
    
    std::string binaryString = decimalToBinary(decimalNumber);
    
    std::cout << "Binary representation: " << binaryString << std::endl;
    
    return 0;
}
