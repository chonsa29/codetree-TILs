#include <iostream>
using namespace std;

int r(int a, int b){
    int c = a;
    for(int i=1;i<b;i++){
        a = a*c;
    }
    return a;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    cout << r(a,b);
    return 0;

}