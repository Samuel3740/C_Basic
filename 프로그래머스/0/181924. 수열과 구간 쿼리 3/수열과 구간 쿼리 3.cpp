#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (auto q : queries) {
        swap(arr[q[0]], arr[q[1]]);
        
        /*
        int i = q[0];
        int j = q[1];
        int tmp = arr[i];
        
        arr[i] = arr[j];
        arr[j] = tmp;
        */
    }
    answer = arr;
        
    return answer;
}