#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string st;
    cin >> n;
    int Xcount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        if (st[1] == '+')
            Xcount++;
        else if (st[1] == '-')
            Xcount--;
        else
            Xcount += 0;
    }
    cout << Xcount << endl;
}