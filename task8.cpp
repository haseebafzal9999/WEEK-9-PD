#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
    string correctPhrase, actualTyped;
    cout << "Enter te correct phrase: ";
    getline(cin, correctPhrase);
    cout << "Enter what you actual typed: ";
    getline(cin, actualTyped);
    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    bool present;
    string count = "";
    for (int i = 0; correctPhrase[i] != 0; i++)
    {
        present = false;
        for (int j = 0; count[j] != '\0'; j++)
        {
            if (correctPhrase[i] == count[j])
            {
                present = true;
                break;
            }
        }

        if ( present == true)
            continue;
        
        if (correctPhrase[i] != actualTyped[i])
        {
            count = count + correctPhrase[i];
        }
    }
    return count;
}
