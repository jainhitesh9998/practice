#include <bits/stdc++.h>

using namespace std;

int getWays(vector < int > squares, int d, int m){
    int num = 0;
    for (int i = 0; i< squares.size(); i++){
        /*if(squares[i] == d)
            {
            num++;
            continue;
        }*/
        int sum = squares[i];
        int j = i+1;
        int m1 = 0;
        while(sum < d && j < i+m ){
            sum+=squares[j];
            j++;
            m1++;
        }
        if(sum == d && j-i == m){
            num++;
            
        }
        /*for (int j = i+1; i< squares.size(); j++){
            if(sum == d)
                {
                
            }*/
        
    }
    return num;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout<<result<<endl;
    return 0;
}
