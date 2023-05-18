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
    int x, y, c = 0;
    cin >> x >> y;
    int a[x];
    for (size_t i = 0; i < x; i++)
        cin >> a[i];
    y--;
    if (a[y])
        c++;
    for (int i = 1; i < x; i++)
    {
        int l = y - i, r = y + i;
        if (l >= 0 || r < x)
        {
            if (l >= 0 && r < x)
            {
                if (a[l] && a[r])
                    c += 2;
            }
            else if (a[l] && l >= 0)
                c++;
            else if (a[r] && r < x)
                c++;
        }
    }
    cout << c;
    return 0;
}