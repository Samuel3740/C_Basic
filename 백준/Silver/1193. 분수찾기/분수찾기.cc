#include <iostream>
using namespace std;

int main(){
    int n, numerator, denominator;
    int line = 1;

    cin >> n;
    

    while(n > line){
        n -= line;
        line++;
    }

    if(line % 2 == 0){             
        numerator = n;
        denominator = line - n + 1;
    } 
    else{                             
        numerator = line - n + 1;
        denominator = n;
    }

    cout << numerator << "/" << denominator << endl;
}