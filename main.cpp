/*
Developer: Jayden Veloz
File Name: Ch5Ex27.cpp
Date: 10 / 26 / 26

Requirements:
Write a program that produces a bar chart showing the population growth of Prairieville, a small town
in the Midwest, at 20-year intervals during the past 100 years. The program should read in the
population figures (rounded to the nearest 1,000 people) for 1910, 1930, 1950, 1970, 1990, and 2010
from a file. For each year it should display the date and a bar consisting of one asterisk for each
1,000 people.”
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int roundTo = 1000;
    int initialYear = 1910;

    // List of population per year (1910 - 2010)
    int population[] = {2000, 4000, 5000, 9000, 14000, 18000};

    cout << "PRAIRIEVILLE POPULATION GROWTH\n" << "(each * represents 1,000 people)" << endl;

    for (int i = 0; i <= 5; i++) {
        // Displays each year starting with 1910 and adding 20 after each line
        cout << initialYear + (i * 20) << ": " << setw(1);

        // Asterisks displayed equals every 1000 of the population
        // Uses variable from population list and divides by 1000
        int numAsterisks = population[i] / roundTo;

        // Adds * for every 1000
        for (int j = 0; j < numAsterisks; j++) {
            cout << "*";
        }

        cout << endl;
    }
}