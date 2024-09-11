#include <iostream>
using namespace std;


bool a(int a) {
    if (a % 4 != 0) return false;
    else if (a % 100 == 0 && a % 400 != 0) return false;
    else return true;
    
}
int main(){
    int y;
    cin >> y;

    if (a(y) == 1) cout << "true";
    else cout << "false";
    return 0;
}