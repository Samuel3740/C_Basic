#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const vector<int>& q : queries) {
        int s = q[0];
        int e = q[1];
        int k = q[2];
        
        int minValue = 1000001;
        
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                minValue = min(minValue, arr[i]);
            }
        }
        
        if (minValue == 1000001) {
            answer.push_back(-1);
        } else {
            answer.push_back(minValue);
        }
        
    }
    
    return answer;
}