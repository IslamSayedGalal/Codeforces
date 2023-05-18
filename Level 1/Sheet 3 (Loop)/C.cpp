#include <iostream>
using namespace std;
int main() {
    int N, X;
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;
    cin >> N;

    for (int c = 0; c < N; c++) {
        cin >> X;
        if (X > 0)
            Positive++;
        else if (X < 0) 
            Negative++;
        if (X % 2 == 0)
            Even++;

        else if (X % 2 != 0) 
            Odd++;
    }
    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;

    return 0;
}