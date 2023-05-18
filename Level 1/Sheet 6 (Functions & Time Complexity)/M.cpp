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
string solve(int x, int y)
{
    string a = "abcdefghijklmnopqrstuvwxyz", b;
    for (size_t i = 0; i < x; i++)
    {
        b += a[i % y];
    }

    return b;
}

int main()
{
    Islam();
    int x, y, z;
    cin >> x >> y;
    cout << solve(x, y);
}