#include <iostream>
using namespace std;

int main(){
    int HH, MM, H, M;
    cin >> HH >> MM;
    
    if(MM >= 45){
            H = HH;
            M = MM - 45;
        cout << H << " " << M << endl;
    }
    else if(MM < 45){
        if(HH < 1){
            H = 23;
            M = MM + 60 - 45;
        cout << H << " " << M << endl;
        }
        if(HH > 0){
            H = HH - 1;
            M = MM + 60 - 45;
        cout << H << " " << M << endl;
        }
    }
}
