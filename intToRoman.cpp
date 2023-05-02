#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num)
{
    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            roman += symbols[i];
            num -= values[i];
        }
    }

    return roman;
}

/// roman to int
int romanToInt(string s)
{
    int num = 0;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string RomanValues[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    for (int i = 0; i < 13; i++)
    {
        while (s.substr(0, RomanValues[i].size()) == RomanValues[i])
        {
            num += values[i];
            s = s.substr(RomanValues[i].size());
        }
    }
    return num;
}

int main()
{
    int num;
    string s = "";
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman numeral representation: " << intToRoman(num) << endl;

    cout << "Enter a string: (in capital letters) ";
    cin >> s;
    cout << "Integer numeral representation: " << romanToInt(s) << endl;

    return 0;
}
