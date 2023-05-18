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
    string a;
    cin >> a;
    int len = a.length();
    int x, sm, c = 0;
    while (len > 1)
    {
        sm = 0;
        for (int i = 0; i < len; i++)
            sm += a[i] - '0';
        a = to_string(sm);
        len = a.length();
        c++;
    }
    cout << c;
    return 0;
}