#include <iostream>
using namespace std;

int main()
{
    int arr[101];
    bool valid = true;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (n < 2 * count - 1)
        {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}