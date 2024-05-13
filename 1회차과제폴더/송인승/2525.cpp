using namespace std;
#include <iostream>
int main(){
    int A,B;
    long C;
    cin >> A >> B;
    cin >> C;
     B += C;
    if(B >= 60){
        A += B / 60;
        B %= 60;
    }
    
    if (A >= 24){
        A %= 24;
    }
    
    cout << A << " " << B << endl;
    return 0;
}