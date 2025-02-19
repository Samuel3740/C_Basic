#include <iostream>
using namespace std;

int main(){
    int n1, n2, k1, k2;
    int total_seat = 0;
    cin >> n1 >> n2 >> k1 >> k2;
    
    total_seat =  n1*n2 +k1*k2;
    
    cout << total_seat;
}