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
    ll x, y, d = 0;
    string a, c, b = "abcdefghijklmnopqrstuvwxyz";
    cin >> x;
    if (x < 26)
    {
        cout << "NO";
    }
    else
    {
        cin >> a;
        for (size_t i = 0; i < x; i++)
        {
            if (isupper(a[i]))
                a[i] = tolower(a[i]);
        }

        sort(a.begin(), a.end());
        c = a[0];
        for (size_t i = 1; i < a.size(); i++)
        {
            if (a[i] == a[i - 1])
                ;
            else
                c += a[i];
        }
        if (c == b)
            cout << "YES";
        else
            cout << "NO";
    }
}