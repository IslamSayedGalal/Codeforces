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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = max((3 * a) / 10, a - (a / 250) * c);
    b = max((3 * b) / 10, b - (b / 250) * d);
    if (a == b)
        cout << "Tie";
    else if (a > b)
        cout << "Misha";
    else
        cout << "Vasya";
    return 0;
}