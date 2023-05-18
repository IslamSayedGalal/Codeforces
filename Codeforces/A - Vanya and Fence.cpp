#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n, h, count = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= h)
        {
            count++;
        }
        else
        {
            while (arr[i] > h)
            {
                arr[i] -= h;
                count++;
            }
            count++;
        }
    }
    cout << count << endl;
}