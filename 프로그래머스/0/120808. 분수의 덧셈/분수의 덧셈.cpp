#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);
    
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    int num = gcd(numer, denom);
    
    answer[0] = numer / num;
    answer[1] = denom / num;
        
    return answer;
}