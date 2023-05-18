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
void solve(string x)
{
    int pas = 0;
    char b = 'a';
    for (size_t i = 0; i < x.length(); i++)
    {
        int l1, l2;
        l1 = abs(x[i] - b);
        l2 = 26 - abs(l1);
        pas += min(l1, l2);
        b = x[i];
    }
    cout << pas;
}

int main()
{
    Islam();
    int a, b, c, d, e, f = 0;
    string x;
    cin >> x;
    solve(x);
}