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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c, b, a;
            cin >> c;
            if (i == 0 && j == 0)
                a = c;
            else if (i == 0 && j == 1)
                b = c;
            if (i == j || i + j == n - 1)
            {
                if (c != a || a == b)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else if (c != b || a == b)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}