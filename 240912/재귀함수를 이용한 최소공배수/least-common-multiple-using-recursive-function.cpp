#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    vector<int> v;
    vector<int> v2;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int l = v[0];
    for (int i = 0;i < n;i++) {
        l = lcm(l, v[i]);
    }

    cout << l << endl;

    return 0;
}