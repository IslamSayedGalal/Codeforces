#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int arr[1005];
    int num, length, maximum = 0;
    cin >> num >> length;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + num);
    maximum = max(arr[0], length - arr[num - 1]) * 2;
    for (int i = 0; i < num - 1; i++)
    {
        maximum = max(maximum, arr[i + 1] - arr[i]);
    }

    cout << fixed << setprecision(10) << maximum / 2.0 << endl;
}