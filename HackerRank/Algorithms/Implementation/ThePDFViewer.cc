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
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int max = 0;
    size_t a = word.size();
    char a1 = 'a';
 
    for (int i = 0; i<a; i++){
        
        if(max < h[(int)word[i] - 97]){
            
            max = h[(int)word[i] - 97];
        }
        
    }
    
    cout<<max*a;
    return 0;
}

