// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program is converts Celsius to Fahrenheit

#include <iostream>
#include <string>

void Temperature() {
    std::string strCelsius;
    int intCelsius;
    double fahrenheit;

    // input
    std::cout << "Enter a number in degrees Celsius: ";
    std::cin >> strCelsius;

    // process and output
    try {
        intCelsius = std::stoi(strCelsius);
        fahrenheit = (9.0 / 5) * intCelsius + 32;
        std::cout << intCelsius << "°C is equal to " << fahrenheit << "°F.";
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
int main() {
    // this function calls other functions

    // call functions
    Temperature();
}
