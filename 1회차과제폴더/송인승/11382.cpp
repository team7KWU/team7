/*첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 1012)이 공백을 사이에 두고 주어진다.

출력
A+B+C의 값을 출력한다.

예제 입력 1 
77 77 7777
예제 출력 1 
7931 */
#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    
    long long sum = a + b + c;
    cout << sum << endl;
    
    return 0;
}