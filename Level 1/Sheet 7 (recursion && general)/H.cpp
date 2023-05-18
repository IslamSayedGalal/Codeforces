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
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        int a[y];
        bool bl = true;
        for (size_t i = 0; i < y; i++)
            cin >> a[i];
        for (size_t i = 0; i < y; i += 2)
        {
            if (a[i] % 2 != a[0] % 2)
            {
                bl = false;
                break;
            }
        }
        for (size_t i = 1; i < y; i += 2)
        {
            if (a[i] % 2 != a[1] % 2)
            {
                bl = false;
                break;
            }
        }
        if (bl)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}