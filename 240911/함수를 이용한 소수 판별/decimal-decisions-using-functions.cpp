#include <iostream>
using namespace std;

bool prime(int a) {
    int cnt = 0;

    if (a == 1) return false;
    else {
        for (int i = 2;i < a;i++) {
            if (a % i == 0) cnt++;
        }
    }
    if (cnt == 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    int sum = 0;
    for (int i = a;i <= b;i++) {
        if (prime(i) == 1) sum = sum + i;
    }

    cout << sum;
    return 0;
}