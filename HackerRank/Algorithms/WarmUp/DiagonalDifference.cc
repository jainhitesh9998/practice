#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,sa=0,sb=0,dif,c;
    cin >> n;
    c=n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int a_i =0;a_i<n;a_i++){
        sa+=a[a_i][a_i];
        sb+=a[a_i][--c];
    }
    dif = abs(sa-sb);
    cout<<dif;
    return 0;
}
