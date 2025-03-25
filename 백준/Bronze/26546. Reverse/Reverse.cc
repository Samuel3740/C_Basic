#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string str;
        int a, b;

        cin >> str >> a >> b;

        string result = str.substr(0, a) + str.substr(b);

        cout << result << '\n';
    }
}