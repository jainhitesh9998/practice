#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    vector <int> count(2);
    int c = 0, c1  = 0;
    int max = s[0], min = s[0];
    for (int i = 1; i<s.size(); i++){
        if(s[i] > max){
            c++;
            max = s[i];
        }
        if(s[i] < min){
            c1++;
            min = s[i];
        }
    }
    count[0] = c;
    count[1] = c1;
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
