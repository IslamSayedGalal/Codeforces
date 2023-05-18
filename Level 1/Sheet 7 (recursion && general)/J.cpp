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
    string s;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        string b;
        b += s[i] + b += s[i + 1];
        if (s[i] == '.')
            cout << 0;
        else if (b == "-.")
        {
            cout << 1;
            i++;
        }
        else if (b == "--")
        {
            cout << 2;
            i++;
        }
    }
}