#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int result = 0;
    string str;
    
    cin >> str >> N;

    for(char c : str){ 
        result = result * N + (isdigit(c) ? c - '0' : c - 'A' + 10);
    }

    cout << result;
}