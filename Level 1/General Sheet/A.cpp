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
    float t, s = 0;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        s += x;
    }
    cout << s / t;
}