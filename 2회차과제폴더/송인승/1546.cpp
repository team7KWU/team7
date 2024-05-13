#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int max_score = 0;
    double sum = 0.0;

    for (int i = 0; i < N; ++i) {
        int score;
        cin >> score;

        // 최대값
        if (score > max_score) {
            max_score = score;
        }

        // 점수 합
        sum += score;
    }

    // 새로운 평균 계산
    double average = (sum / max_score) * 100 / N;

    
    cout << average << '\n';

    return 0;
}
