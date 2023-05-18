#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1, a2, a3, a4, calories = 0;
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    string st;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> st;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '1')
            r1++;
        else if (st[i] == '2')
            r2++;
        else if (st[i] == '3')
            r3++;
        else
            r4++;
    }
    calories += a1 * r1;
    calories += a2 * r2;
    calories += a3 * r3;
    calories += a4 * r4;
    cout << calories << endl;
}