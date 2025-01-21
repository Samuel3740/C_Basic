#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Calculate{
private:
    vector<string> Name;
    vector<double> score;
    vector<string> Grade;
    double sum1 = 0;  
    double sum2 = 0;  
    double GPAresult;

public:
    void InputData(){
        string tmpName, tmpGrade;
        double tmpScore;

        for (int i = 0; i < 20; ++i){
            cin >> tmpName >> tmpScore >> tmpGrade;
            Name.push_back(tmpName);
            score.push_back(tmpScore);
            Grade.push_back(tmpGrade);
        }
    }

    double GradeToNumeric(string grade){
        if (grade == "A+") return 4.5;
        if (grade == "A0") return 4.0;
        if (grade == "B+") return 3.5;
        if (grade == "B0") return 3.0;
        if (grade == "C+") return 2.5;
        if (grade == "C0") return 2.0;
        if (grade == "D+") return 1.5;
        if (grade == "D0") return 1.0;
        if (grade == "F") return 0.0;
        return 0.0; 
    }

    void CalculateResult(){
        for (size_t i = 0; i < score.size(); ++i){
            if (Grade[i] == "P"){
                continue;
            }

            double GradeValue = GradeToNumeric(Grade[i]);
            sum1 += score[i] * GradeValue;
            sum2 += score[i];
        }

        if (sum2 != 0){
            GPAresult = sum1 / sum2;
        } 
        else{
            GPAresult = 0.0;
        }
    }

    void PrintResult() const{
        cout << fixed;
        cout.precision(6);
        cout << GPAresult << endl;
    }
};

int main(){
    Calculate calc;
    calc.InputData();
    calc.CalculateResult();
    calc.PrintResult();
}