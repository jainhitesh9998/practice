#include <bits/stdc++.h>

using namespace std;

int solve(vector < int > grades){
    // Complete this function
    for (int i =  0; i < grades.size(); i++){
        if(grades[i] < 38)
            cout<<grades[i]<<endl;
        else{
            if(grades[i] % 5 >=3 )
                cout<<grades[i]+5 -grades[i]%5<<endl;
            else
                cout<<grades[i]<<endl;
        }
        
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    int result = solve(grades);
    //cout << result << endl;
    return 0;
}
