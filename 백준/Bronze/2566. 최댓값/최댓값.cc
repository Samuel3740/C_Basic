#include <iostream>
using namespace std;

int main() {
	int arr[9][9];
	int x, y, input; 
    int max = -1;
    
	for (int i = 0; i < 9; ++i){
		for (int j = 0; j < 9; ++j){
			cin >> input;
			arr[i][j] = input;
            
			if (arr[i][j] > max){
				max = arr[i][j];
				x = i; y = j;
			}
		}
	}
	cout << max << endl;
	cout << x + 1 << " " << y + 1;
}