#include <iostream>
using namespace std;
string conSeven(int numbers[], int size);
main()
{
    int size;

    cout << "Enter the size of Array: ";
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << conSeven(numbers, size);
}
string conSeven(int numbers[], int size)
{
    for (int idx = 0; idx < size; idx++)
    {
        int digit = numbers[idx] % 10;
        int leftdigit = numbers[idx] / 10;
        while (leftdigit != 0)
        {
            if (digit == 7)
            {
                return "Boom!";
            }
            digit = leftdigit % 10;
            leftdigit = digit / 10;
        }
    }
    return "there is no 7 in the array";
}