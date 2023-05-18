#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> x, y, z;
    int num, countX = 0, countY = 0, countZ = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
        cin >> temp;
        y.push_back(temp);
        cin >> temp;
        z.push_back(temp);
    }

    for (int i = 0; i < num; i++)
    {
        countX += x[i];
        countY += y[i];
        countZ += z[i];
    }

    if (countX == 0 && countY == 0 && countZ == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}