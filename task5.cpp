#include <iostream>
using namespace std;
int CountCommonCharacters(string FirstStr, string SecondStr);
int main()
{
    string STRING1, STRING2;
    cout << "Enter the first string: ";
    cin >> STRING1;
    cout << "Enter the second string: ";
    cin >> STRING2;
    int COUNT = CountCommonCharacters(STRING1, STRING2);
    cout << "Number of common characters: " << COUNT << endl;
    return 0;
}
int CountCommonCharacters(string FirstStr, string SecondStr)
{
    int charCount[26] = {0};
    for (int i = 0; i < FirstStr.length(); ++i)
    {
        char character = FirstStr[i];
        charCount[character - 'a']++;
    }

    int COUNT = 0;
    for (int i = 0; i < SecondStr.length(); ++i)
    {
        char character = SecondStr[i];
        if (charCount[character - 'a'] > 0)
        {
            COUNT++;
            charCount[character - 'a']--;
        }
    }

    return COUNT;
}