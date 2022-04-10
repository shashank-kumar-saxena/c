#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    string st = "", str = "";
    int p = 1;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != " ")
        {
            st = s[i];
            p = 1;
        }
        else if (s == " " && p == 1)
        {
            st = st + s[i];
            p = 0;
        }
    }
    cout << s;
    return 0;
}