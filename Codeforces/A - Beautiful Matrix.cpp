#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int r = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                if (i <= 2)
                {
                    r += (2 - i);
                    if (j < 2)
                        r += (2 - j);
                    else
                        r += (j - 2);
                }
                else if (i > 2)
                {
                    r += (i - 2);
                    if (j < 2)
                        r += (2 - j);
                    else
                        r += (j - 2);
                }
            }
        }
    }
    cout << r << endl;
}