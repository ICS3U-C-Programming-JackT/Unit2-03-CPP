// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 3, 2025
// This program determines the cost of a pizza
// based on user input

// import all libraries
#include <cmath>
#include <iomanip>
#include <iostream>

// Define constants for pizza cost formula
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGREDIENT_COST = 1.50;

int main() {
    float diameter;  // Define variable for diameter

    std::cout << "Enter the diameter of your pizza (inches): ";  // Print startup message
    std::cin >> diameter;                                        // Assign diameter

    // Variables for subtotal, tax and total cost
    float subtotal = LABOUR_COST + RENTAL_COST + INGREDIENT_COST * diameter;
    float tax = subtotal * HST;
    float total = tax + subtotal;

    // Print final cost, set decimals of cost to 2
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total cost of your pizza will be: $" << total << std::endl;
}
