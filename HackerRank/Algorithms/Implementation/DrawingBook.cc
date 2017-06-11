#include <bits/stdc++.h>
using namespace std;
int solve(int n, int p){
    // Complete this function
    /*int count = 0;
    if(n % 2 == 0){
        if(n-p > p){
            count = p / 2;
        }
        else{
            count = (n - p)/ 2;
        }
    }
    else{
        if(p > n-p){
            count = (n - p)/2;
        }
        else{
            count = p/2;
        }
    }
    return count;*/
    int turn_p = p/2, turn_n;
    if(n % 2 == 0)
        turn_n = (n - p + 1) / 2;
    else
        turn_n = (n - p)/2;
    return min(turn_p, turn_n);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
