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
    cin >> n;
    int max = 0, count = 0, val;
    for (int i = 0 ;i<n; i++){
        cin >> val;
        if(val == max)
            count++;
        else{
            if(val > max){
                count = 1;
                max = val;
            }
        }
    }
    cout <<count;
    return 0;
}