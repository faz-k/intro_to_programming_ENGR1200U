// First In Class Example
// Easy Peasy
// #Gonna Get 100%
// #LETSGO


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1{1}, y1{5}, x2{4}, y2{7}, side1, side2, distance;
    side1 = x2 - x1;
    side2 = y2 - y1;
    distance = sqrt(pow(side1, 2) + pow(side2, 2));
    cout << "Distance: " << distance << endl;

    return 0;
}