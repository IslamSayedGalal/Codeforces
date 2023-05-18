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
void solve(int x)
{
    int a[x], y;
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cin >> y;
    for (size_t i = 0; i < y; i++)
    {
        int b, c;
        cin >> b >> c;
        --b;
        if (b != 0)
        {
            a[b - 1] += c - 1;
        }
        if (b != x - 1)
        {
            a[b + 1] += a[b] - c;
        }
        a[b] = 0;
    }
    for (size_t i = 0; i < x; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    Islam();
    int x;
    cin >> x;
    solve(x);
}