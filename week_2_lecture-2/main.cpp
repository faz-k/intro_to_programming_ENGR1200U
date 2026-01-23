// building onto the previous example
// still ez



#include <iostream>
#include <bitset>


using namespace std;


//
int main()
{
    int a(1);
    int b {2};    int c = 5;
    int x;
    
    const int k = 100;
    
    const char character = 'A';

    cout << "Hello World" << " Initial Text"<< endl;
    cout << "char: " << character << endl;
    cout << int(character) << " int value of const char"<< endl;
    cout << bitset<8>(character) << " binary value of const char\a"<< endl;

    return 0;
}