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
    int x;
    cin >> x;
    int a[x];
    for (size_t i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a, a + x);
    cout << a[x - 1];
    return 0;
}