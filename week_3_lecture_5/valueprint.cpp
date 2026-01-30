#include <iostream>
#include <iomanip>



int main()
{
    float totalPrice = 100.257564;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Total Price: $" << totalPrice << std::endl;
}