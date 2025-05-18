// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 7th, 2025
// This program asks the user to enter a number within the
// given range and checks if the guessed number is correct or not
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    int randomNumber = rand_r() % 10;
    // Generate a random number between 0 and 9
    std::string userNumber;
    while (true) {
        // Ask the user to input a number
        std::cout << "Guess a number between (0-9): ";
        std::cin >> userNumber;
        try {
            // Convert user input to integer
            int userNum = stoi(userNumber);
            // Check if the number us within valid range
            if (userNum < 0 || userNum > 9) {
                std::cout << "Please enter a number within"
                "the given range." << std::endl;
            } else if (userNum != randomNumber) {
                std::cout << "Try again " << std::endl;
                // Check if the guessed number is incorrect
            } else {
                // If the guess is correct, exit the loop
                std::cout << "You got it right" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            // Handle the case where input is not a valid integer
            std::cout << "Please enter a valid number" << std::endl;
        }
    }
    std::cout << "Thank you for participating." << std::endl;
    // Thank the user after the loop ends

    return 0;
}
