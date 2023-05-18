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
    for (int j = 1; j <= t; j++)
    {
        int x, sum = 0;
        cin >> x;
        for (size_t i = 0; i < x; i++)
        {
            int y;
            cin >> y;
            sum += y;
        }
        cout << "Case " << j << ": " << sum << endl;
    }
}