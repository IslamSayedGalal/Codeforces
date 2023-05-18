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
    int t, c = 0, c1 = 0;
    cin >> t;
    int a[1000];
    while (t--)
    {
        char x;
        cin >> x;
        if (x == 'W')
        {
            if (c)
            {
                a[c1] = c;
                c1++;
                c = 0;
            }
        }
        else
            c++;
    }
    if (c)
    {
        a[c1] = c;
        c1++;
        c = 0;
    }
    cout << c1 << endl;
    for (size_t i = 0; i < c1; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}