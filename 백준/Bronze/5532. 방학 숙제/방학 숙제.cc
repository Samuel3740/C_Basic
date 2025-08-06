#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int L, A, B, C, D;
    
    cin >> L >> A >> B >> C >> D;
    

    int korean_days = (A + C - 1) / C;  
    int math_days = (B + D - 1) / D;  
    

    int work_days = max(korean_days, math_days);
    

    cout << L - work_days << endl;
    
    return 0;
}