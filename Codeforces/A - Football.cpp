#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int count0 = 0, count1 = 0;
    bool flag = false;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == '0')
        {
            count1 = 0;
            count0++;
        }
        else if (str[i] == '1')
        {
            count0 = 0;
            count1++;
        }

        if (count0 >= 7 || count1 >= 7)
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        cout << "NO" << endl;
    }
}