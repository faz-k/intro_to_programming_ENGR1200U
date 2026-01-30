/*
    Practice during lecture 5 of week 3.

    This program prompts the user to enter their first and last name,
    then greets them with a personalized message.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter your first and last name" << endl;

    string first_name, last_name;

    cin >> first_name >> last_name;

    cout << "Hello, " << first_name << " " << last_name << "!" << endl;
}