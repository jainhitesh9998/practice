#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // write your code here
    int sum = 0, count = 0;
    for (int i = 0; i<a.size(); i++){
        
        for(int j = i+1; j < a.size(); j++){
            sum = a[i] + a[j];
            if(sum % k == 0)
                count++;
        }
    }
    cout<<count;
    return 0;
}
