#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab = to_string(a) +  to_string(b);
    int _2ab = 2*a*b; 
    
    if (stoi(ab) >= _2ab) {
        answer = stoi(ab);
    }
    else {
        answer = _2ab;
    }
    
    
    return answer;
}