#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string str1, string str2) {
    int min_len = min(str1.size(), str2.size());
    string answer = "";
    
    for(int i = 0; i < min_len; i++) {
        answer += str1[i];
        answer += str2[i];
    }
    
    if (str1.size() > str2.size()) {
        for (int j = str2.size(); j < str1.size(); j++) {
            answer += str1[j];
        }
    }
    else {
        for (int j = str1.size(); j < str2.size(); j++) {
            answer += str2[j];
        }        
    }

    return answer;
}