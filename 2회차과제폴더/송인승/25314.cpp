#include <iostream>
using namespace std;

string LongTimes(int N) {
        int numlongs = N / 4;
        string result = "long";
        for (int i = 1; i < numlongs; ++i) {
            result += " long";
        }
        result += " int";
        return result;
    }

int main() {
    int N;
    cin >> N;

    string Answer = LongTimes(N);

    cout << Answer << endl;

    return 0;
}
