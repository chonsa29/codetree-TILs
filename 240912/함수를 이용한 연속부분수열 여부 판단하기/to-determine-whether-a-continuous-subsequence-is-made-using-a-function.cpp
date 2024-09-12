#include <iostream>
#include <vector>

using namespace std;

string a(vector <int> v1, vector <int> v2) {

    int cnt = 0;

    for (int i = 0;i < v1.size();i++) {
        
        if (v1[i] == v2[0]) {
            for (int j = 0;j < v2.size();j++) {
                if (v1[i + j] == v2[j]) cnt++;
                if (cnt == v2.size()) break;
            }
        }
    }
   
    if (cnt == v2.size()) return "Yes";
    else return "No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;

    vector <int> v1;
    vector <int> v2;
    for (int i = 0;i < n1;i++) {
        int num;
        cin >> num;
        v1.push_back(num);
    }

    for (int j = 0;j < n2;j++) {
        int num;
        cin >> num;
        v2.push_back(num);
    }

   cout << a(v1, v2);

    return 0;
}