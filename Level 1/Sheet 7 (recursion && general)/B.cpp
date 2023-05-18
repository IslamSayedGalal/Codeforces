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
    long long x, y, maxi = 1;
    cin >> x >> y;
    int mi = min(x, y);
    for (size_t i = 2; i <= mi; i++)
    {
        maxi *= i;
    }
    cout << maxi;
}