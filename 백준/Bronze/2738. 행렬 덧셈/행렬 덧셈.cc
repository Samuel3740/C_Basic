#include <iostream>
using namespace std;

const int MAX = 100;

int main(){
	int matrix[MAX][MAX] = {0};

	int N, M;
	cin >> N >> M;

	for (int n = 0; n < 2; ++n){
		for (int i = 0; i < N; ++i){
			for (int j = 0; j < M; ++j){
				int num;
				cin >> num;
				matrix[i][j] += num;
			}
		}
	}

	for (int i = 0; i < N; ++i){
		for (int j = 0; j < M; ++j){
			cout << matrix[i][j] << " ";}
		cout << endl;
	}
}