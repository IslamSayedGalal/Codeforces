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
void solve(string a)
{
    string b;
    sort(a.begin(), a.end());
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z' && a[i] != a[i - 1])
            b.push_back(a[i]);
    }
    cout << b.length();
}

int main()
{
    Islam();
    string a;
    getline(cin, a);
    solve(a);
}