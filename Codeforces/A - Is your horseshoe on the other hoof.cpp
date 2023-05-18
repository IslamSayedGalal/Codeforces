#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int color[4], count = 0;
    for (int i = 0; i < 4; i++)
        cin >> color[i];
    sort(color, color + 4);
    for (int j = 0; j < 3; j++)
    {
        if (color[j] == color[j + 1])
            count++;
    }
    cout << count << endl;
}