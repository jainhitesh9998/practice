#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int gcd(int a, int b){
    if(b != 0)
        return gcd(b , a%b);
    return a;
}
int lcm(vector<int> arr){
    int l = arr[0];
    for (int i = 0; i<arr.size(); i++)
        l = l*arr[i]/gcd(l,arr[i]);
    return l;
    
}

int gcd(vector<int> arr){
    int g = arr[0];
    for (int i = 0; i<arr.size(); i++)
        g =gcd(g, arr[i]);
    return g;  
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    int l = lcm(a);
    int g = gcd(b);
    int count = 0;
    for (int i = l; i <= g; i+=l){
        if(g%i == 0)
           count++;
        //cout<<i<<" ";
    }
    cout<<count;
    return 0;
    
   
}
