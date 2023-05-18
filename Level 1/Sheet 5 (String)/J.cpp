#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    string st;
    cin >> n;
    cin >> st;
    bool arr[26] = { false };

    for (int i = 0; i < n; i++) {
        arr[int(tolower(st[i]) - 'a')] = true;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == true)
            count++;
    }

    if (count == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
