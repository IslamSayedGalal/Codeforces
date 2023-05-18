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
    int t, s1 = 0, s2 = 0;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin >> a[i];
        s2 += a[i];
    }
    int b, c;
    cin >> b >> c;
    b--;
    c--;
    int mn = min(b, c), mx = max(b, c);
    for (size_t i = mn; i < mx; i++)
    {
        s1 += a[i];
    }
    s2 -= s1;
    cout << min(s1, s2);
    return 0;
}