#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	vector<int> v;

	cin >> n;

	for (int i = 1;i <= n;i++) {
		int num = 0;
		cin >> num;
		v.push_back(num);

		if (i % 2 == 1) {
			sort(v.begin(), v.end());
			cout << v[i / 2] << " ";
		}	
	}


	
	return 0;
}