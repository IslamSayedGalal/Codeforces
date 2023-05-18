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
int solve(int x)
{
    int m = 0, i = 1;
    while (x != 0)
    {
        int d = x % 10;
        x /= 10;
        if (d != 0)
        {
            m += d * i;
            i *= 10;
        }
    }
    return m;
}
const int N = 1e5 + 5;
int main()
{
    Islam();
    int a, b;
    cin >> a >> b;
    int c = a + b;
    int A = solve(a);
    int B = solve(b);
    int C = solve(c);
    cout << (A + B == C ? "YES" : "NO");
    return 0;
}