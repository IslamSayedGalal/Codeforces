//#include <iostream>
//using namespace std;
//int main()
//{
//    int test;
//    cin >> test;
//    while (test--)
//    {
//        int n, arr[102];
//        bool flag = true;
//        cin >> n;
//        for (int i = 0; i < n; i++)
//        {
//            cin >> arr[i];
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i + 1; j < n; j++)
//            {
//                if (arr[i] == arr[j])
//                {
//                    flag = false;
//                    cout << "No" << endl;
//                    break;
//                }
//            }
//            if (!flag)
//                break;
//        }
//        if (flag)
//            cout << "Yes" << endl;
//    }
//}