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
    int x, e = 0, o = 0, pos1, pos2;
    cin >> x;
    for (size_t i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        if (y % 2)
        {
            o++;
            pos1 = i + 1;
        }
        else
        {
            e++;
            pos2 = i + 1;
        }
    }
    if (o < e)
        cout << pos1;
    else
        cout << pos2;
    return 0;
}