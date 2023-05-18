#include <iostream>
using namespace std;
int a[200004], bb[200005];
int main()
{
    int n, k, q, i, l, r, aa, b;

    cin >> n >> k >> q;
    for (i = 0; i < n; i++)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for (i = 1; i <= 200001; i++)
    {
        a[i] = a[i] + a[i - 1];
    }

    for (i = 1; i < 200001; i++)
    {
        if (a[i] >= k)
            bb[i] = 1;
        else
            bb[i] = 0;
    }

    for (i = 1; i <= 200001; i++)
        bb[i] = bb[i] + bb[i - 1];

    while (q > 0)
    {
        cin >> aa >> b;

        cout << bb[b] - bb[aa - 1] << endl;
        q--;
    }
    return 0;
}