// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/27/2021
// This is the average Mark program
// The program asks the user what their mark is
// The program then figures out and displays the average of all the marks

#include <iostream>
#include <list>


float Average(std::list<int> listNumbers) {
    // This function calculates the average

    // process
    int total = 0;
    float average = 0;
    int numbs = 0;

    for (int numb : listNumbers) {
        total = total + numb;
        numbs = numbs + 1;
    }

    average = total / numbs;

    return average;
}


int main() {
    // This function uses a list to get marks
    std::list<int> listNumbers;
    int mark = 0;
    int average;
    int count = 0;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (mark != -1) {
    // input
        std::cout << "What is your mark (as %): ";
        try {
            std::cin >> mark;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input" << std::endl;
        }
        listNumbers.push_back(mark);
    }
    listNumbers.pop_back();

    average = Average(listNumbers);
    std::cout << "\nThe average is " << average << "%" << std::endl;
    std::cout << "\nDone."<< std::endl;
}
