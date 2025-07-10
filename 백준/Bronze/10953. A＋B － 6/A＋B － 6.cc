#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;

    cin >> T;

    cin.ignore(); 

    for (int i = 0; i < T; ++i) {
        string input;

        getline(cin, input); 

        size_t comma = input.find(',');
        string a_str = input.substr(0, comma);
        string b_str = input.substr(comma + 1);

        int a = stoi(a_str);
        int b = stoi(b_str);


        cout << a + b << endl;
    }

    return 0;
}