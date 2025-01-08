#include <iostream>
using namespace std;

int main(){
    int A, B, C, H, M;
    cin >> A >> B >> C;
    
    if(B + C > 59){
        H = A + (B + C) / 60; 
        M = (B + C) % 60;    
        if(H > 23) H -= 24;   
    }
    else {
        H = A;
        M = B + C;
    }
    cout << H << " " << M << endl;
}
