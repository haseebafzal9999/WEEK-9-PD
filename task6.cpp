#include <iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    string cols[size];
    for (int i = 0; i <size; i++)
    {
        cout << "Enter Element " << i + 1 << ":";
        cin >> cols[i];
    }
    cout<<"Time to color: "<<coloringTime(cols, size)<<" seconds";
}
int coloringTime(string cols[], int size)
{
    int time=size*2;
    int count=0;
    int total;
    for(int x=0; x<size-1 ;x++)
    {
        if(cols[x] != cols[x+1])
        {
            count++;
        }
    }
    total=time+count;
    return total;
}
