#include <iostream>
using namespace std;
void pinToDance(string pasword);
int main()
{
    string pasword;
    int i = 0 , count = 0 ;
    cout << "Enter your PIN (4 digits): ";
    cin >> pasword;
    while(pasword[i] != '\0') 
    {
        count++ ;
        i++ ;
    }
    for(int i = 0 ; pasword[i] != '\0' ; i++)
    {
        if(pasword[i] != '0' && pasword[i] != '1' && pasword[i] != '2' && pasword[i] != '3' && pasword[i] != '4' && pasword[i] != '5' && pasword[i] != '6' && pasword[i] != '7' && pasword[i] != '8' && pasword[i] != '9')
        {
        cout << "Invalid input" ; 
        return 0 ;
        }
    }
    if (count == 4)
        pinToDance(pasword); 
        else
        {
            cout << "Invalid input";
        }
}
void pinToDance(string pasword)
{
    string dance[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                        "Pop", "Lock", "Arabesque"};
    for (int i = 1; i <= 4; i++)
    {
        if (pasword[i - 1] == '0')
            cout << dance[i - 1];
        if (pasword[i - 1] == '1')
            cout << dance[i];
        if (pasword[i - 1] == '2')
            cout << dance[i + 1];
        if (pasword[i - 1] == '3')
            cout << dance[i + 2];
        if (pasword[i - 1] == '4')
            cout << dance[i + 3];
        if (pasword[i - 1] == '5')
            cout << dance[i + 4];
        if (pasword[i - 1] == '6')
            cout << dance[i + 5];
        if (i == 1)
        {
            if (pasword[0] == '7')
                cout << dance[7];
            if (pasword[0] == '8')
                cout << dance[8];
            if (pasword[0] == '9')
                cout << dance[9];
        }
        if (i == 2)
            if (pasword[1] == '9')
                cout << dance[0];
            else
            {
                if (pasword[i - 1] == '7')
                    cout << dance[i + 6];
                if (pasword[i - 1] == '8')
                    cout << dance[i + 7];
            }
        if (i == 3)
        {
            if (pasword[2] == '8')
                cout << dance[0];
            if (pasword[2] == '9')
                cout << dance[1];
        }
        else
        {
            if (pasword[i - 1] == '7')
                cout << dance[i + 6];
        }
        if (i == 4)
        {
            if (pasword[3] == '7')
                cout << dance[0];
            if (pasword[3] == '8')
                cout << dance[1];
            if (pasword[3] == '9')
                cout << dance[2];
        }
        if (i != 4)
            cout << ", ";
    }
}