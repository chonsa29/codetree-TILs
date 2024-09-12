#include <iostream>
#include <vector>

using namespace std;

string s(int a, int b) {
    if (a > 12 || b > 31) return "No";
    else if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
        if (b <= 31) return "Yes";
        else return "No";
    }
    else if (a == 4 || a == 6 || a == 9 || a == 11) {
        if (b <= 30) return "Yes";
        else return "No";
    }
    else if (a == 2) {
        if (b <= 28) return "Yes";
        else return "No";
    }



}
int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;

    cout << s(M, D);
    return 0;
}