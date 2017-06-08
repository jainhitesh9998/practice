#include <bits/stdc++.h>

using namespace std;

int calculate(vector<int> date){
    int total = 0;
    for (int i = 0; i<8; i++)
        total+=date[i];
    return total;
        
}

string solve(int year){
    // Complete this function
    vector<int> leap {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> non_leap {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> year_1918 {31, 15, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    int day, month ;
    if(year < 1918){
        if(year%4 == 0){
            total = calculate(leap);
            day = 256 - total;
            month = 9;
        }
        else{
            day = 256 - calculate(non_leap);
            month = 9;
        }
    }
    else if(year > 1918){
        if(year%4 == 0 && year%100 != 0 || year %400 == 0){
            total = calculate(leap);
            day = 256 - total;
            month = 9;
        }
        else{
            day = 256 - calculate(non_leap);
                month = 9;
        }
    }
    else{
        day = 256 - calculate(year_1918);
        month = 9;
        
    }
    string mon ="";
    if( month < 10)
        mon = "0" + to_string(month);
    else
        mon = to_string(month);
        string strday ="";
    if( day < 10)
        strday  = "0" + to_string(day);
    else
        strday = to_string(day);
    return strday+"."+mon+"."+to_string(year);
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
