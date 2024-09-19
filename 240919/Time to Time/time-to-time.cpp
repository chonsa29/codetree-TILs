#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int time(int a, int b, int c, int d) {
	int temp = c - a;
	temp = temp * 60;
	temp = temp - b + d;
	return temp;
}
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << time(a, b, c, d);


	
	return 0;
}