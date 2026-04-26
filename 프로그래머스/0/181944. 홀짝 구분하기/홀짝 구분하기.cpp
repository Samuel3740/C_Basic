#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n << " is even";
    }
    else {
        cout << n << " is odd";
    }
    
    return 0;
}