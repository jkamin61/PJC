#include <iostream>
#include <valarray>
#include <vector>
#include "fmt/base.h"

auto userGreeting() -> void {
    auto name = std::string();
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    if (name == "Einstein") {
        std::cout << "I know you" << std::endl;
    } else std::cout << "Greetings " << name << std::endl;
}

auto guessNumber() -> void {
    auto const randomNumber = std::rand();
    auto guessedNumber = -1;

    while (guessedNumber != randomNumber) {
        std::cout << "Guess a number: ";

        std::cin >> guessedNumber;

        if (guessedNumber > randomNumber) {
            std::cout << "Too big. Try going lower." << std::endl;
        }
        if (guessedNumber < randomNumber) {
            std::cout << "Too low. Try going bigger." << std::endl;
        }
    }
}

auto isPrime(const int number) -> bool {
    if (number < 2) return false;
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

auto checkNumbersForPrimality() {
    auto numbersToCheckForPrimality = std::vector<int>{};
    auto exit = false;
    auto index = 0;
    std::cout << "Start entering numbers to be checked. Enter negative number to exit program." << std::endl;
    while (exit != true) {
        auto number = 0;
        std::cin >> number;
        if (number < 0) {
            exit = true;
        }
        numbersToCheckForPrimality[index] = number;
        index++;
    }

    for (const auto number: numbersToCheckForPrimality) {
        if (isPrime(number)) {
            std::cout << number << " is prime" << std::endl;
        } else {
            std::cout << number << " is not prime" << std::endl;
        }
    }
}

int main() {
    userGreeting();
    guessNumber();
    checkNumbersForPrimality();
    return 0;
}
