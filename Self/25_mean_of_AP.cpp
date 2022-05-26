#include <iostream>
using namespace std;

int main()
{
    float first_term, common_difference;
    int no_of_terms;
    cout << "*** Program for finding mean of an AP ***\n\n";

    cout << "Enter 1st term of the AP: ";
    cin >> first_term;
    cout << "Enter common difference of the AP: ";
    cin >> common_difference;
    cout << "Enter number of terms of the AP: ";
    cin >> no_of_terms;

    float AP[no_of_terms], sum = 0;

    for (int i = 1; i <= no_of_terms; i++)
    {
        AP[i] = first_term + (i - 1) * common_difference;
        sum += AP[i];
    }

    cout << "\nYour AP is " << first_term << ", " << first_term + common_difference << ", " << first_term + common_difference + common_difference << " ... " << first_term + (no_of_terms - 1) * common_difference << endl;
    cout << "Mean of the given AP is " << sum / no_of_terms << endl;

    return 0;
}