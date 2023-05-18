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
    cin >> x >> y;
    int mn = min(x, y);
    if (mn % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}