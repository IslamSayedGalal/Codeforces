#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{

    string st;
    cin >> st;
    int len = st.length();
    int smoves = 0;
    int strt = 0;
    for (int i = 0; i < len; i++)
    {
        int index = st[i] - 97;
        int walk = abs(strt - index);
        if (walk < 13)
        {
            smoves += walk;
        }
        else
        {
            smoves += 26 - walk;
        }
        strt = index;
    }
    cout << smoves << endl;
}