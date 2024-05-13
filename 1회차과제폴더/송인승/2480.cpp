#include <iostream>
#include <algorithm>  // sort 함수 사용해서 순서대로 정렬
using namespace std;

int main() {
    int dice[3];
    
    
    cin >> dice[0] >> dice[1] >> dice[2];
    
   
    sort(dice, dice + 3);
    
    int award = 0; // 상금

    // 3개가 다 같음
    if (dice[0] == dice[1] && dice[1] == dice[2]) {
        award = 10000 + dice[0] * 1000;
    }
    // 2개만 같을때
    else if (dice[0] == dice[1] || dice[1] == dice[2]) {
        int same = (dice[0] == dice[1]) ? dice[0] : dice[2];
        award = 1000 + same * 100;
    }
    // 다 다를때
    else {
        // dice[2] = 가장 큰 눈
        award = dice[2] * 100;
    }

    cout << award << endl;

    return 0;
}
