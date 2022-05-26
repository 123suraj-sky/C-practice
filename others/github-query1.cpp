#include <iostream>
#include <algorithm>
using namespace std;

// Defining the BinaryFunction
bool comp(int a, int b)
{
    return (a < b);
}

int main()
{
    int v[] = {9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 16};

    // Finding the maximum value between the third and the
    // ninth element

    int *i1;
    i1 = max_element(v + 2, v + 9, comp);

    cout << *i1 << "\n";
    return 0;
}
//? What is the use of v+2 and v+9 in line 19
//? &v[2] and &v[9]