#include <iostream>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Re;
    cin >> Re;

    for (int i = 0; i < Re; ++i) {
        int A, B;
        cin >> A >> B;

        cout << A + B << '\n';
    }

    return 0;
}
