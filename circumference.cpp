// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program calculates the circumference of a circle
//    with the circumference that is given by the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the circumference

    const double TAU = M_PI * 2;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of the circle (cm): " << std::flush;
    std::cin >> radius;

    // process
    circumference = TAU * radius;

    // output
    std::cout << "\nThe circumference is " <<
    circumference << " cm" << std::endl;
}
