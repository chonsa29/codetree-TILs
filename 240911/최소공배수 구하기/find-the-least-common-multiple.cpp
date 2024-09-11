#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b,a%b);
}


int lcm(int a, int b){
    return a*b/gcd(a,b);
    } 
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    cout << lcm(n,m);
    return 0;
}