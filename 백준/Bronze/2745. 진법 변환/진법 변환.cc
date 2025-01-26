#include <iostream>
#include <string>
using namespace std;

int main(){
    int B, result = 0;
    string N;
    string charMap = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> N >> B;

    for (char c : N){
        result = result * B + charMap.find(c);
    }

    cout << result;
}