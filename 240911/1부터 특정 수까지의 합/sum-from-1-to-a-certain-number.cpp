#include <iostream>
using namespace std;

int sum(int a){
    int sum = 0;
    for (int i =1;i<=a;i++){
        sum = sum+i;
    }
    return sum/10;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << sum(n);
    return 0;
}