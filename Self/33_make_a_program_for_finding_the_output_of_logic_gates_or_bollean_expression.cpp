#include <iostream>
using namespace std;

int main()
{
    int a, b, c, y;
    a = 0, b = 1, c = 1;

    // given boolean function is y = abc + a'bc' + bc
    y = (a and b and c) or (not(a) and b and not(c)) or (b and c);
    cout << "y is " << y << endl;

    return 0;
}