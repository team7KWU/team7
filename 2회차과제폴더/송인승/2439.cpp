//공백은 n-i , 별은 i개
//공백 이후에 별을 출력해야함
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    //줄 갯수를 입력받음

    for (int i = 1; i <= N; ++i) {
        
        string stars(i, '*');  
        string spaces(N - i, ' ');  
        cout << spaces << stars << '\n';  
    }

    return 0;
}
