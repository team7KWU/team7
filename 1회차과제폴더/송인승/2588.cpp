/*첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.

예제 입력 1 
472
385
예제 출력 1 
2360
3776
1416
181720 */
#include <iostream>
using namespace std;
int main(){
    int a,b;
    
    cin >> a >> b;
    
    int digit1 = b % 10;       
    int digit2 = (b / 10) % 10; 
    int digit3 = b / 100;      

 
    cout << a * digit1 << endl;
    cout << a * digit2 << endl; 
    cout << a * digit3 << endl; 

    cout << a * b << endl; 

    return 0;
}