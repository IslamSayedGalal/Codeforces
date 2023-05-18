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
    int x, y;
    string a, b;
    cin >> a;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] == '+')
            ;
        else
            b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    for (size_t i = 0; i < b.length(); i++)
    {
        cout << b[i];
        if (i < b.length() - 1)
            cout << "+";
    }
}