#include <iostream>
using namespace std;

int main()
{
    int n, a;
    bool vis[100001]{};
    cin >> n;
    int target = n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vis[a] = 1;
        if (a == target)
        {
            for (int j = a; j >= 1; j--)
            {
                if (!vis[j])
                    break;
                cout << j << " ";
                target = j - 1;
            }
        }
        cout << endl;
    }

    return 0;
}