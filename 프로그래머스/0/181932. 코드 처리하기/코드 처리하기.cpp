#include <iostream>
#include <string>
using namespace std;

string solution(string code) {
    int mode = 0;
    string answer = "";
    string ret = "";
    
    for (int idx = 0; idx < code.size(); idx++) {
        switch (mode){
            case 0:
                if (code[idx] == '1') {
                    mode = 1;
                } else {
                    if (idx % 2 == 0) ret.push_back(code[idx]);
                }
                break;
            case 1:
                if (code[idx] == '1') {
                    mode = 0;
                } else {
                    if (idx % 2 == 1) ret.push_back(code[idx]);
                }
                break;
        }
    }
    
    /*
        for (int idx = 0; idx < code.size(); idx++) {
        if (code[idx] == '1') {
            mode = 1 - mode;
        } else {
            if (mode == 0 && idx % 2 == 0) ret.push_back(code[idx]);
            if (mode == 1 && idx % 2 == 1) ret.push_back(code[idx]);
        }
    }
    */
    
    answer = ret;
    
    if (ret.empty()) return "EMPTY";
    
    return answer;
}