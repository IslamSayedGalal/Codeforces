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
    int a[t];
    for (int i = 0; i < t; i++)
        cin >> a[i];

    int c, k, m = 0;
    for (int i = 0; i < t; i++)
    {
        c = 1;
        k = i;
        for (size_t j = i - 1; j >= 0; j--)
        {
            if (a[j] <= a[k])
                c++;
            else
                break;
            k--;
        }
        k = i;
        for (size_t j = i + 1; j < t; j++)
        {
            if (a[j] <= a[k])
                c++;
            else
                break;
            k++;
        }
        m = (m > c) ? m : c;
    }
    if (t > 1)
        cout << m;
    else
        cout << 1;
    return 0;
}