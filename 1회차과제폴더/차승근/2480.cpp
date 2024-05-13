#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) {
		if (b == c) cout << 10000 + b * 1000;//셋 다 같음
		else cout << 1000 + b * 100;//a b만 같음
	}
	else {
		if (b == c) cout << 1000 + b * 100;//b c만 같음
		else if (a == c) cout << 1000 + a * 100;
		else cout << max(max(a, b), c) * 100;//셋 다 다름
	}

}