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
    int t, a1 = 0, b1 = 0;
    cin >> t;
    bool al = true, bl = true;
    string a, b;
    for (size_t i = 0; i < t; i++)
    {
        string x;
        cin >> x;
        if (i == 0)
        {
            a = x;
            al = false;
        }
        else if (x != a)
        {
            b = x;
            bl = false;
        }
        if (x == a)
            a1++;
        else
            b1++;
    }
    if (a1 > b1)
        cout << a;
    else
        cout << b;
}