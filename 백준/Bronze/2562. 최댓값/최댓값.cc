#include <iostream>
#include <vector>
using namespace std;

int main(){
    int max = 0;
    int count;
    
    vector<int> arr(9);
    
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(arr[i] >= max){
            max = arr[i];
            count = i;
        }
    }
    cout << max << endl << count + 1 << endl;
}