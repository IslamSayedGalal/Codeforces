#include <iostream>
using namespace std;
int main()
{
    int n;
    int crime = 0, ploice = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            ploice += x;
        }
        else
        {
            if (ploice == 0)
            {
                ++crime;
            }
            else
            {
                --ploice;
            }
        }
    }
    cout << crime << endl;
}