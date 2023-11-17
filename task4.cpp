#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
    int size;
    int n;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;
    evenOddTransform( arr, size,  n);
}
void evenOddTransform(int arr[], int size, int n)
{

    for (int idx = 0; idx < size; idx++)
    {
        if (idx % 2 == 0)
        {
            arr[idx] += (n * 2);
        }
        else
        {
            arr[idx] -= (n * 2);
        }
    }
    //nichy vala sirf answer output ky motabik bnany ky liy ha 
    cout<<"[";
    for(int x=0; x<size; x++)
    {
        
       cout<<arr[x];
       if(x<size-1)
       {
        cout<<", ";
       }
    }
    cout<<"]";
}
