#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "No" << endl;
    }
    else
    {
        if (n % 2 == 0)
            cout << "yes" << endl;
        else
            cout << "No" << endl;
    }
}