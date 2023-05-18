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
    while (t--)
    {
        int step = 0;
        char a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        s.push_back(d);
        sort(s.begin(), s.end());
        for (size_t i = 0; i < 3; i++)
        {
            if (s[i] != s[i + 1])
                step++;
        }
        cout << step << endl;
    }
}