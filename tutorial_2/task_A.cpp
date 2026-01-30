/*
    Tutorial 2 Task A
    Write a program that hard-codes the value of r, to compute the area of a circle of
    radius r. For this calculation, use the value 3.14 for 𝜋.
    𝐴 = 𝜋𝑟2
*/

#include <iostream>

int main()
{
    const int r = 10; // Hard coded r value

    const double pi = 3.14; // Hard coded pi value

    float area = pi * (r * r); // Calculate area of circle as a float value since area can be a decimal value..

    std::cout << "Circle Area for radius: " << r << " is: " << area << std::endl;

    return 0;
}