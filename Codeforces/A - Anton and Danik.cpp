#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int n, anton = 0, danik = 0;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'A' || st[i] == 'a')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton" << endl;
    else if (danik > anton)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}