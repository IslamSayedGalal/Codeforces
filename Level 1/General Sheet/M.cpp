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
    int n, pos = 0;
    double m, ma = 0;
    cin >> n >> m;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= m)
            a[i] = 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        if (ceil(a[i] / m) >= ma)
        {
            ma = ceil(a[i] / m);
            pos = i + 1;
        }
    }
    cout << pos;
}