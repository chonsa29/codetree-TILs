#include <iostream>
using namespace std;

bool n(int a) {
    if (a % 2 == 0 || a % 10 == 5 || a % 3 == 0 && a % 9 != 0) return false;
    else return true;
}
int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b;i++) {
        if (n(i) == 1) cnt++;
    }

    cout << cnt;
    return 0;
}