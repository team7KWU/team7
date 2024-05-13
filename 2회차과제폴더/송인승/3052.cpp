#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> remainders;  // 나머지를 저장할 set 컨테이너 (중복된 값이 자동으로 제거됨)

    for (int i = 0; i < 10; ++i) { //10개의 수 입력받음
        int num;
        cin >> num;
        int remainder = num % 42; //42로 나눈 나머지 저장
        remainders.insert(remainder);  // set에 나머지들을 추가
    }

    // size가 다른 나머지들의 갯수를 출력 = 다른 나머지를 가진 숫자들의 갯수
    cout << remainders.size() << '\n';

    return 0;
}
