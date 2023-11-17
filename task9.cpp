#include <iostream>

using namespace std;
string Longest7Segement(string array[], int size);

int main()
{
    int size;
    cout << "Enter the  number of words: ";
    cin >> size;
    cout << "Enter the words, one by one: " << endl;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Longest 7-segment word: " << Longest7Segement(array, size);
}
string Longest7Segement(string array[], int size)
{
    string factor;
    string largest = "";
    int dig[size];
    for (int idx = 0; idx < size; idx++)
    {
        int result = 0;
        factor = array[idx];

        for (int i = 0; factor[i] != '\0'; i++)
        {
            if (factor[i] == 'k' || factor[i] == 'm' || factor[i] == 'v' || factor[i] == 'w' || factor[i] == 'x')
            {
                result++;
            }

            if (result == 0)
            {
                dig[idx] = i;
            }
            else
            {
                dig[idx] = 0;
            }
            cout << dig[idx] << endl;
        }
        for (int j = 0; j < size; j++)
        {
            int count = 0;
            for (int i = 0; i < size; i++)
            {

                if (dig[j] >= dig[i])
                {
                    count++;
                }
            }

            if (count == size)
            {
                largest = array[j];
            }
        }
    }
    return largest;
}