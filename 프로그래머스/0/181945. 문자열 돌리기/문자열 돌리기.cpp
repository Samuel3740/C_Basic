#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string str;
    
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << "\n";
    }
    
    return 0;
}