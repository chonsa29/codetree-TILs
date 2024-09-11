#include <iostream>
using namespace std;

int sum(int a){
    return (a/10)+(a%10);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(n%2 == 0 && sum(n)%5 == 0) cout << "Yes";
    else cout <<"No";
    return 0;
}