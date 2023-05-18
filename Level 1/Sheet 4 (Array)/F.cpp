//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//
//	int arr[1005] = {0};
//	int k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> k;
//		arr[k]++;
//	}
//	
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] != 1) {
//			cout << "No" << endl;
//			return 0;
//		}
//	}
//	cout << "Yes" << endl;
//}



#include <iostream>
using namespace std;
int main() {
	int size;
	cin >> size;
	int* array = new int[size];


	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
			if (array[i] > array[j]) {
				swap(array[j], array[i]);
			}
	}

	if (array[size - 1] == size) {
		cout << "Yes";

	}
	else {
		cout << "No";
	}

	return 0;
}


