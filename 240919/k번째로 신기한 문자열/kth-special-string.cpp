#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, k;
	string T;
	vector<string> s;
	vector<string> s2;

	cin >> n >> k >> T;

	for (int i = 0;i < n;i++) {
		string str;
		cin >> str;
		s.push_back(str);
	}

	int size = s.size();

	for (int i = 0;i < size;i++) {
		int cnt = 0;
		for (int j = 0;j < T.size();j++) {
			if (s.back()[j] == T[j]) {
				cnt++;
			}
		}
		if (cnt == T.size()) {
			s2.push_back(s.back());
			s.pop_back();
		}
		else {
			s.pop_back();
		}
	}

	sort(s2.begin(), s2.end());

	cout << s2[k-1];

	return 0;
}