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
int a[5]={0};
void Islam()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    Islam();
    long long x, taxi = 0;
    cin >> x;
    for (size_t i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        ++a[y];
    }
    taxi = a[4] + a[3] + (a[2] / 2 + a[2] % 2);
    a[1] = a[1] - a[3];
    a[1] = (a[1] < 0) ? 0 : a[1];
    a[2] %= 2;
    a[1] = a[1] - 2 * a[2];
    if (a[1] > 0)
        taxi += a[1] / 4;
    if (a[1] % 4 > 0)
        taxi++;
    cout << taxi;
}