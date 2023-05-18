#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, Sereja = 0, Dima = 0;
    int arr[1005];
    cin >> n;
    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[r] > arr[l])
            {
                Sereja += arr[r];
                r--;
            }
            else if (arr[r] < arr[l])
            {
                Sereja += arr[l];
                l++;
            }
            else
            {
                Sereja += arr[l];
            }
        }
        else
        {
            if (arr[r] > arr[l])
            {
                Dima += arr[r];
                r--;
            }
            else if (arr[r] < arr[l])
            {
                Dima += arr[l];
                l++;
            }
            else
            {
                Dima += arr[l];
            }
        }
    }

    cout << Sereja << " " << Dima << endl;
}