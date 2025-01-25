#include <iostream>
using namespace std;

int main(){
    bool whitepaper[100][100] = { false };
    int N, row, col;
    int total = 0;
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> row >> col;
        for(int j = row; j < row + 10; ++j){
            for(int k = col; k < col + 10; ++k){
                if(!whitepaper[j][k]){
                    whitepaper[j][k] = true;
                    ++total;
                }
            }
        }
    }
    cout << total << endl;
}