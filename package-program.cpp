// Copyright (c) 2022 Emmanuel All rights reserved
//
// Created by: Emmanuel
// Created on: Oct 2022
// This program accepts packages for a company,
// and decides if the package is acceptable or not.
// This program uses if and else statements.

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
    <<packageWeight<< "kg is an approved weight, the company accepts package.";
    } else {
        std::cout
    <<packageWeight<< "kg is unapproved weight, the company rejects package.";
    }
    std::cout << "\n";
    packageVolume = (packageLength * packageWidth * packageHeight);
    if (packageVolume <= 10000) {
        std::cout
    <<packageVolume<< " cubic cm is approved, the company accepts package.";
    } else {
        std::cout
    <<packageVolume<< " cubic cm is unapproved, the company rejects package.";
    }
    if (packageWeight == 27 or packageVolume > 10000){
        std::cout << "\nSorry the company cannot accepted the package because its equal to 27kg or larger than 10,000 cubic cm.";
    }

    std::cout << "\n\nDone.\n";
}
