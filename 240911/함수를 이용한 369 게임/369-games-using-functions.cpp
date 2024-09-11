#include <iostream>
using namespace std;

bool find(int a) {
    int one = a % 10;
    int ten = a / 10;

    if (one == 3 || one == 6 || one == 9) return true;
    else if (ten == 3 || ten == 6 || ten == 9) return true;
    else return false;
}

bool mul(int a) {
    return a % 3 == 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a;i <= b;i++) {
        if (find(i) == 1 || mul(i) == 1) cnt++;
    }

    cout << cnt;
    return 0;
}