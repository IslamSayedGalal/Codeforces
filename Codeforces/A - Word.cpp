#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int up = 0, low = 0;
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        if (int(st[i]) >= 65 && int(st[i]) <= 90)
            up++;
        else
            low++;
    }
    if (up > low)
    {
        for (int i = 0; i < st.length(); i++)
            st[i] = toupper(st[i]);
    }
    else
    {
        for (int i = 0; i < st.length(); i++)
        {
            st[i] = tolower(st[i]);
        }
    }
    cout << st << endl;
}