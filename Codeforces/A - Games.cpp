#include <iostream>
using namespace std;
int main()
{
    int N, tot = 0;
    cin >> N;
    int home[100], guest[100];
    for (int i = 0; i < N; i++)
        cin >> home[i] >> guest[i];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (home[i] == guest[j])
                tot++;
        }
    }
    cout << tot << endl;
}