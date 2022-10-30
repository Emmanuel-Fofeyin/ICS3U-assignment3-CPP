// Copyright (c) 2022 Emmanuel All rights reserved
//
// Created by: Emmanuel
// Created on: Oct 2022
// this program accepts packages for a company,
// and decides if the package is acceptable or not.

#include <math.h>
#include <iostream>

int main() {
    // creating variables
    int packageWeight;
    int packageLength;
    int packageVolume;
    int packageWidth;
    int packageHeight;

    // input
    std::cout << "Enter weight of package (kg): ";
    std::cin >> packageWeight;
    std::cout << "Enter package length (cm): ";
    std::cin >> packageLength;
    std::cout << "Enter package width (cm): ";
    std::cin >> packageWidth;
    std::cout << "Enter package height (cm): ";
    std::cin >> packageHeight;
    std::cout << "\n";

    // process and output
    if (packageWeight > 27 || packageWeight < 27) {
        std::cout
    << packageWeight << "kg is an acceptable weight, the company approves.";
    } else {
        std::cout
    <<packageWeight<< "kg is an unacceptable weight, the company disapproves.";
    }
    packageVolume = (packageLength * packageWidth * packageHeight);
    if (packageVolume <= 10000) {
        std::cout
    << packageVolume << " cubic cm is acceptable, the company approves.";
    } else {
        std::cout
    << packageVolume << " cubic cm is unacceptable, the company disapproves.";
    }

    std::cout << "\n\nDone.\n";
}
