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
int a[100001];
int main()
{
    Islam();
    int t;
    cin >> t;
    int n = t;
    while (t--)
    {
        int x;
        cin >> x;
        a[x] = 1;
        for (size_t i = n; i >= 0; i--)
        {
            if (a[i])
            {
                cout << i << " ";
                n--;
            }
            else
                break;
        }
        cout << endl;
    }
}