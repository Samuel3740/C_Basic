#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;
    
    if (n % 7 == 0) {
        cnt = n / 7;
    } else {
        cnt = n / 7 + 1;
    }
    answer = cnt;
    
    return answer;
}