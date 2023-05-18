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
    int a[x];
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a, a + x);
    for (size_t i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    Islam();
    ll x, y = 0, c = 0, d = 0;
    cin >> x;
    solve(x);
}
