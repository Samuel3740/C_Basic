#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    float sum = 0;
    float avg;
    cin >> N;

    vector<int> arr(N);
    int max_value = 0;

    for (int i = 0; i < N; ++i){
        cin >> arr[i];
        if (arr[i] > max_value){
            max_value = arr[i];
        }
        sum += arr[i];
    }

    avg = (sum / max_value * 100) / N;

    cout << fixed;
    cout.precision(6);
    cout << avg << endl;
}
