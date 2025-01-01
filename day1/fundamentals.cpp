#include <iostream>
using namespace std;

int main()
{
    int num;
    int howMany;
    cout << "Enter how many numbers you want to add: ";
    cin >> howMany;

    int sum = 0;

    for (int i = 0; i < howMany; i++)
    {
        cout << "Enter your number: ";
        cin >> num;
        sum += num;
    }
    cout << "The sum of the numbers is " << sum;
    return 0;
}
