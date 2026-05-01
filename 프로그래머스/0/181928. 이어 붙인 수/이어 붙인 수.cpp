#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd = "";
    string even = "";
    
    for (int num : num_list) {
        if ( num % 2 == 1) {
            odd += to_string(num);
        } else {
            even += to_string(num);
        }
    }
    
    int odd_num = stoi(odd);
    int even_num = stoi(even);
    
    answer = odd_num + even_num;
    
    return answer;
}