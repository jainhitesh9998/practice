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
    int count = 0;
    int max_a = *max_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
    for (int i = max_a; i <=min_b; i++){
        bool flag = true, flag1 = true;
        for (int j = 0; j< a.size(); j++){
            if(i %a[j] != 0){
                flag = false;
                break;
            }
        }
            if(flag){
                for (int j = 0; j<b.size(); j++){
                    if(b[j]%i != 0){
                        flag1 = false;
                        break;
                    }
                    
                }
            }
            if(flag &&flag1){
                //cout<<i<<" ";
                count++;
            }
        
        
    }
    cout<<count;
    
    return 0;
}
