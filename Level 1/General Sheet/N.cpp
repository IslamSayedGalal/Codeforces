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
    ll x, c1 = 0, c2 = 0;
    cin >> x;
    ll a[x];
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            c1++;
    }
    cout << c1 << endl;
    for (size_t i = 0; i < x; i++)
    {
        if (a[i] == 1 && i != 0)
        {
            cout << c2 << " ";
            c2 = 1;
        }
        else
            c2++;
    }
    cout << c2;
}