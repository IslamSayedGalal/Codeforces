#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    for (int i = 0; i < st.length(); i++)
    {
        st[i] = tolower(st[i]);
        if (st[i] != 'a' && st[i] != 'e' && st[i] != 'o' && st[i] != 'y' && st[i] != 'u' && st[i] != 'i')
        {
            cout << "." << st[i];
        }
    }
}