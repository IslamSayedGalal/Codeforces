#include <iostream>
using namespace std;
int main()
{

    int shovel, coin, sum = 1;
    cin >> shovel >> coin;

    while (1)
    {
        if ((shovel * sum) % 10 == coin || (shovel * sum) % 10 == 0)
            break;
        sum++;
    }
    cout << sum << endl;
}