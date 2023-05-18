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
void solve(string s, string y)
{

    int x = 0;
    for (int i = 0; i < y.length(); i++)
    {
        if (y[i] == s[x])
            x++;
    }
    cout << x + 1;
}

int main()
{
    Islam();
    string s, y;
    cin >> s >> y;
    solve(s, y);
}