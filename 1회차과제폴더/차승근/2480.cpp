#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b) {
		if (b == c) cout << 10000 + b * 1000;//�� �� ����
		else cout << 1000 + b * 100;//a b�� ����
	}
	else {
		if (b == c) cout << 1000 + b * 100;//b c�� ����
		else if (a == c) cout << 1000 + a * 100;
		else cout << max(max(a, b), c) * 100;//�� �� �ٸ�
	}

}