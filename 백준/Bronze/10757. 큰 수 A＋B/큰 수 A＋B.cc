#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string inputA, inputB;
    string result = "";
    cin >> inputA >> inputB;
    
    if(inputA.length() < inputB.length()){
        swap(inputA, inputB);
    }
    
    inputB = string(inputA.length() - inputB.length(), '0') + inputB;
    
    bool carry = false;
    
    for(int i = inputA.length() - 1; i >= 0; --i){
        int digit = (inputA[i] - '0') + (inputB[i] - '0') + carry;
        carry = digit > 9;
        result += (digit % 10) + '0';
    }
    
    if(carry) result += '1';
    
    reverse(result.begin(), result.end());
    cout << result;
}