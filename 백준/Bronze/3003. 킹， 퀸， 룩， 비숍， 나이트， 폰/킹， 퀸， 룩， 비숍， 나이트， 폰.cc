#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr(6);
    int piece[6] = {1, 1, 2, 2, 2, 8};
    
    for(int i = 0; i < 6; ++i){
        cin >> arr[i];        
    }

    for(int i = 0; i < 6; ++i){
        cout << piece[i] - arr[i] << " ";
    }    
}