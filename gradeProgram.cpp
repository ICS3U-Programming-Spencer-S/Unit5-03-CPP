// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Dec 6, 2022
// A program using functions to find a input grade percentaged.

#include <iostream>

std::string CalcMark(std::string level) {
    if (level == "4+") {
        return "97.5%";
    } else if (level == "4") {
        return "90.5%";
    } else if (level == "4-") {
        return "83%";
    } else if (level == "3+") {
        return "78%";
    } else if (level == "3") {
        return "74%";
    } else if (level == "3-") {
        return "71%";
    } else if (level == "2+") {
        return "68%";
    } else if (level == "2") {
        return "64.5%";
    } else if (level == "2-") {
        return "61%";
    } else if (level == "1+") {
        return "58%";
    } else if (level == "1") {
        return "54.5%";
    } else if (level == "1-") {
        return "51%";
    } else if (level == "R") {
        return "24.5%";
    } else if (level == "r") {
        return "24.5%";
    } else {
        return "-1";
    }
}

int main() {
    // Declaring variables
    std::string inputLevel, outMark;

    // user input
    std::cout << "Enter a grade (3+) to calculate: ";
    std::cin >> inputLevel;

    // calls function for mark
    outMark = CalcMark(inputLevel);

    // for invalid inputs
    if (outMark == "-1") {
        std::cout << inputLevel << " is not a valid input\n";

        // out message and mark
    } else {
        std::cout << "A level "
        << inputLevel << " has the middle percentage of ";
        std::cout << outMark << ".\n";
    }
}
