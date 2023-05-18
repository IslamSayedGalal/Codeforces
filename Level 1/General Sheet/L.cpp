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
    int c1 = 0, c2 = 0;
    string a, b;
    cin >> a;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] == '0')
            c1++;
        else
            break;
    }
    for (size_t i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == '0')
            c2++;
        else
            break;
    }
    int m = max(c1, c2) - min(c1, c2);
    for (size_t i = 0; i < m; i++)
    {
        b += '0';
    }
    if (c1 > c2)
        b = a + b;
    else
        b = b + a;
    a = b;
    reverse(b.begin(), b.end());
    if (a == b)
        cout << "Yes";
    else
        cout << "No";
}