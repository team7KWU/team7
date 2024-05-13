#include <iostream>
#include <vector>
using namespace std;

void rever(vector<int>& a, int start, int end);

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<double> v1;
	double N, max = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
		if (a > max)max = a;
	}

	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum += (v1[i] / max) * 100;
	}
	cout << sum / N;
}