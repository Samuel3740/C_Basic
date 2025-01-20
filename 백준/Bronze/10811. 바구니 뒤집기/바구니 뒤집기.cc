#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int i, j, N, M;
    cin >> N >> M;
    vector<int> arr(N);
    
    for(int u = 0; u < N; ++u){
        arr[u] = u + 1;
    }
    
    for(int k = 0; k < M; ++k){
        cin >> i >> j;
        reverse(arr.begin() + i - 1, arr.begin() + j);
    }
    for(int u = 0; u < N; ++u){
        cout << arr[u] << " ";
    }    
}