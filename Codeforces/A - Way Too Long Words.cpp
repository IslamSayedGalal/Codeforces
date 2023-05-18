#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        if (st.length() > 10)
        {
            cout << st[0] << st.length() - 2 << st[st.length() - 1] << endl;
        }
        else
        {
            cout << st << endl;
        }
    }
}