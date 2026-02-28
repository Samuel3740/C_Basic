#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int N;
        cin >> N;

        int totalCredits = 0;
        double totalPoints = 0.0;

        for(int i = 0; i < N; i++){
            int c;
            double g;

            cin >> c >> g;

            totalCredits += c;
            totalPoints += c * g;
        }

        double gpa = totalPoints / totalCredits;

        cout << totalCredits << " " << fixed << setprecision(1) << gpa << "\n";
    }
    
    return 0;
}