#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int arr[100];
	int arr2[100];
	cin >> n;

	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}

	for (int i = 0;i < n;i++) {
		int num;
		cin >> num;
		arr2[i] = num;
	}

	sort(arr, arr + n);
	sort(arr2, arr2 + n);

	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (arr[i] == arr2[i]) cnt++;
	}

	if (cnt == n) cout << "Yes";
	else cout << "No";
	return 0;
}