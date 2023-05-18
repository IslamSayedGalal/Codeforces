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
    string b;
    for (size_t i = 0; i < x.length(); i++)
    {
        if (x[i] == '+')
            ;
        else
            b.push_back(x[i]);
    }
    sort(b.begin(), b.end());
    for (size_t i = 0; i < b.length(); i++)
    {
        cout << b[i];
        if (i < b.length() - 1)
            cout << "+";
    }
}

int main()
{
    Islam();
    string a;
    cin >> a;
    solve(a);
}