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
    for (size_t i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < t; i++)
    {
        if (a[i] == 1)
        {
            cout << -1;
            return 0;
        }
    }
    cout << 1;
}