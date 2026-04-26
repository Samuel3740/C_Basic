#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    string str;
    
    cin >> str >> n;
    
    for (int i = 0; i < n; i++) {
        cout << str;
    }
    
    return 0;
}