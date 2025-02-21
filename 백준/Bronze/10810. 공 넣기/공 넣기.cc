#include <iostream>
using namespace std;

int arr[100];
int N, M;

int main(){
    cin >> N >> M;
    
    while (M--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for(int u = i; u <= j; u++){
            arr[u] = k;
        }
    }
    
    for(int i = 1; i <= N; ++i){
        cout << arr[i] << ' ';
    }
}