#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    vector<int> v;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    for (int i = 0;i < v.size();i++) {
        cout << v[i] << ' ';
    }
    return 0;
}