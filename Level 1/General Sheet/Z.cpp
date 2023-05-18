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
    string a = "ROY", b = "GBIV";
    int x;
    cin >> x;
    cout << a;
    for (size_t i = 0; i < x - 3; i++)
    {
        cout << b[i % 4];
    }

    return 0;
}