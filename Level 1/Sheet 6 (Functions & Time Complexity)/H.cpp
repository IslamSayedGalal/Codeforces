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
void solve(int x, int b)
{
    int a = 1, c1 = 1;
    while (true)
    {
        if ((x * a) % 10 == b || (x * a) % 10 == 0)
            break;
        c1++;
        a++;
    }

    cout << c1;
}

int main()
{
    Islam();
    int a, b, c, d, e, f = 0;
    int x;
    cin >> x >> b;
    solve(x, b);
}