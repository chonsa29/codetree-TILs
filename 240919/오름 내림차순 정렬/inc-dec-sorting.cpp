#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int arr[100];
	cin >> n;

	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}

	sort(arr, arr+n);

	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}

	cout << "\n";
	
	sort(arr, arr + n, greater<int>());
	
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}

	return 0;
}