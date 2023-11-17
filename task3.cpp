#include <iostream>
using namespace std;
bool areAllElementsIdentical(string array[], int size);
main()
{
    int size;

    cout << "Enter the size of Array: ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements " << i + 1 << ": ";
        cin >> array[i];
    }
    cout<< areAllElementsIdentical( array,  size);
}
bool areAllElementsIdentical(string array[], int size)
{
    int count=0;
    for(int x=0; x<size-1 ; x++)
    {
        if(array[x]==array[x+1])
        {
            count++;
        }
    }
    if(count==size-1)
    {
        return true;
    }
    return false;
}
