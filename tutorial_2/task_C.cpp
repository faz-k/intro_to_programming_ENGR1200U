/*
    Tutorial 2 Task C
    Write a program that initializes three variables: m1, m2, and g. Then compute and
    print the tension T:
    m1 = 40, m2 = 10, g = 9.81
    𝑇 = g*(2𝑚1𝑚2)/ (𝑚1 + 𝑚2)
*/

#include <iostream>

using namespace std;

int main()
{

    // Declare and initialize variables
    double m1 = 40.0; // mass 1 in kg
    double m2 = 10.0; // mass 2 in kg
    double g = 9.81;  // acceleration due to gravity in m/s^2

    // Compute tension T
    double T = g * (2 * m1 * m2) / (m1 + m2);

    // Print the result
    std::cout << "The tension T is: " << T << " N" << std::endl;

    return 0;
}
