#include <iostream>
#include <vector>
using namespace std;

int main(){
    int max = 0, count = 0, idx = 0;
    vector<int> arr(26, 0);
    string input;
    
    cin >> input;
    
    for(int i = 0; i < input.length(); ++i){
        if(isalpha(input[i])){
            input[i] = toupper(input[i]);
            ++arr[input[i] - 'A'];
        }
    }
    
    for(int i = 0; i < 26; ++i){
        if(arr[i] > max){
            max = arr[i];
            idx = i;
            count = 1;
        } 
        else if(arr[i] == max){
            count += 1;
        }
    }
    
    if(count > 1){
        cout << "?";
    } 
    else{
        cout << static_cast<char>(idx + 'A');
    }
}