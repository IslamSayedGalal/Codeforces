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
#include <bits/stdc++.h>
#define Mohamed                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL), cout.tie(NULL);
#define ll long long
using namespace std;
void solve(int x)
{
    int a[x], c = 0;
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < x; i += 2)
    {
        for (size_t j = 1; j < x; j += 2)
        {
            if (i - i != 1 && a[i] == a[j])
                c++;
        }
    }
    cout << c;
}

int main()
{
    Islam();
    int a, b, c, d, e, f = 0;
    int x;
    cin >> x;
    x *= 2;
    solve(x);
}