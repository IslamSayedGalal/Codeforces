#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    cin >> st;
    st[0] = toupper(st[0]);
    cout << st << endl;
}