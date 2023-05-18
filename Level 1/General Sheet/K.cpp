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
    int n, m;
    cin >> n >> m;
    int a[m];
    for (size_t i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int smallest = a[n - 1] - a[0];
    for (size_t i = 0; i <= m - n; i++)
    {
        if (a[i + n - 1] - a[i] < smallest)
            smallest = a[i + n - 1] - a[i];
    }
    cout << smallest;
}