#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> submitted(31, false);  // 출석번호 제출 여부 배열 + 초기값 false로 설정

    // 28명의 학생 출석번호 입력받기
    for (int i = 0; i < 28; ++i) {
        int num;
        cin >> num;
        submitted[num] = true;  // 해당 출석번호는 제출됨
    }

    // 제출되지 않은 출석번호 중 가장 작은 두 개 찾기
    int first_missing = -1;
    int second_missing = -1;

    for (int i = 1; i <= 30; ++i) {
        if (!submitted[i]) {
            if (first_missing == -1)
                first_missing = i;
            else {
                second_missing = i;
                break;  // 두 개의 출석번호를 찾았으면 종료
            }
        }
    }

    // 결과 출력
    cout << first_missing << '\n';
    cout << second_missing << '\n';

    return 0;
}
