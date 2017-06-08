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
    int n, pair;
    cin >> n;
    vector<int> c(n), count(100, 0);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
        count[c[c_i]]++;
    }
    for (int i = 1; i<= 100; i++)
        pair+=count[i]/2;
    cout<<pair;
    return 0;
}
