#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#define ll long long
using namespace std;
void Islam()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Islam();
    int x, y, z, c1, d1, b1, all, c2, d2;
    string a, b, c, d;
    cin >> a >> b;
    b1 = b.length();
    z = a.find('|');
    c = a.substr(0, z);
    c1 = c.length();
    d = a.substr(z + 1);
    d1 = d.length();
    all = d1 + c1 + b1;
    if ((all % 2) || c1 > d1 + b1 || d1 > c1 + b1)
        cout << "Impossible";
    else
    {
        for (size_t i = 0; i < b1; i++)
        {
            if (c.length() <= d.length())
                c += b[i];
            else
                d += b[i];
        }
        cout << c + "|" + d;
    }
}