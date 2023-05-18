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
    long long x, y, a = 0, b = 0;
    cin >> x;
    for (size_t i = 0; i < x; i++)
    {
        cin >> y;
        if (y >= 0)
            a = a + y;
        else if (y < 0)
            if (a + y < 0)
                b++;
            else
                a = a + y;
    }
    cout << b;
}