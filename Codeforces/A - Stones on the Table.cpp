#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int count = 0, n;
    cin >> n;
    cin >> st;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == st[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}