#include <iostream>
#include <random>
#include <ctime>  // For time()

int main() {
    // Seed the generator with the current time
    std::mt19937 gen(static_cast<unsigned int>(std::time(0)));

    // Define the range [min, max]
    int min = 1, max = 100;

    // Create a distribution in the range [min, max]
    std::uniform_int_distribution<> distrib(min, max);

    // Generate a random number
    int random_number = distrib(gen);

    // Output the random number
    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
