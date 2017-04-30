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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int count_a = 0, count_o = 0;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    for(int i = 0; i<m; i++){
        //if(apple[i] <=0 && a + apple[i] >= s && a + apple[i] < t)
        if(apple[i] + a >= s and apple[i] + a <= t)
            count_a++;
    }
    for (int i = 0; i<n; i++){
        //if(orange[i] <= 0 && b + orange[i] <= t && b + orange[i] > s)
        if(orange[i] + b >= s && orange [i] +b <= t)
            count_o++;
    }
    cout<<count_a<<endl<<count_o<<endl;
    return 0;
}
