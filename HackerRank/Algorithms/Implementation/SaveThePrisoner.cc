//Needs correction

#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s){
    // Complete this function
    //return (m % n + s - 1) % n;
    int a = m % n;
    if (s == 1 || a == 1)
        return n;
    if( (a + s - 1) > n)
        return (a + s - 1) % n;
    else 
        return a + s - 1;
}
int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}

