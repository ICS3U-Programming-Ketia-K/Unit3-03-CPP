// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 09,  2021
// This program asks the user to guess a number

#include <iostream>
#include <random>

int main() {
    // Generates random number
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    someRandomNumber = idist(rgen);
    // std::cout << someRandomNumber << std::endl;
    // local avaiable
    int numberGuessed;

    // input
    std::cout << "Guess my favorite number between 0 and 9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // process
    if (numberGuessed == someRandomNumber) {
        // output
        std::cout << "YOU guessed correctly!";
    } else {
        std::cout << "You guessed wrong. The correct number is " \
            << someRandomNumber << "\n";
    }
}
