#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;

    // Method 1
    number = sqrt(number * number);

    
    // Method 2
    // if (number < 0)
    //     number *= -1;

    cout << "It's modulus is " << number << endl;

    return 0;
}