#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int c, d;
		cin >> c >> d;
		cout << c + d << "\n";
	}
}