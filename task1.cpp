#include <iostream>
using namespace std;
bool IsLengthEven(string fruite);
main()
{
    string fruite;
    cout << "Enter a string: ";
    cin >> fruite;
    cout << IsLengthEven(fruite);
}
bool IsLengthEven(string fruite)
{
    int count = 0;
    for (int i = 0; fruite[i] != 0; i++)
    {
        count = count + 1;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
