#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    string st_new;
    int count1 = 0, count2 = 0, count3 = 0;
    cin >> st;
    for (int i = 0; i < st.length(); i += 2)
    {
        if (st[i] == '1')
            count1++;
        else if (st[i] == '2')
            count2++;
        else if (st[i] == '3')
            count3++;
    }

    while (count1 > 0)
    {
        st_new.push_back('1');
        st_new.push_back('+');
        count1--;
    }
    while (count2 > 0)
    {
        st_new.push_back('2');
        st_new.push_back('+');
        count2--;
    }
    while (count3 > 0)
    {
        st_new.push_back('3');
        st_new.push_back('+');
        count3--;
    }
    if (st_new.length() % 2 == 0)
    {
        st_new.pop_back();
    }
    cout << st_new << endl;
}