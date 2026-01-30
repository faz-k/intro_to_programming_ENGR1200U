/*
    Tutorial 2 Task B
    Write a program that initializes three variables: the meal cost, the tax percentage, and
    the tip percentage. Then compute and print the total bill.
*/

#include <iostream>
#include <iomanip>

int main()
{
    double meal_cost = 50.15; // initial cost of the meal
    int tax_percentage = 7;   // 7% tax
    int tip_percentage = 15;  // 15% tip

    double tax_cost = meal_cost * tax_percentage / 100;
    double tip_cost = meal_cost * tip_percentage / 100;
    double total_cost = meal_cost + tax_cost + tip_cost;

    std::cout << "Base meal cost: $" << std::fixed << std::setprecision(2) << meal_cost << std::endl;
    std::cout << "Tax cost: $" << std::fixed << std::setprecision(2) << tax_cost << std::endl;
    std::cout << "Tip cost: $" << std::fixed << std::setprecision(2) << tip_cost << std::endl;
    std::cout << "Total bill: $" << std::fixed << std::setprecision(2) << total_cost << std::endl;

    return 0;
}