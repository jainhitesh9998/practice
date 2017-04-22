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
    vector<int> minmax(5);
    long min = LONG_MAX, max = LONG_MIN, sum ;
    for(int i = 0; i < 5; i++)
        cin >> minmax[i];
    for(int i = 0 ;i<5; i++)
        {
        sum = 0;
        for (int j = 0; j < 5; j++){
            if(i != j)
                sum+=minmax[j];
        }
        if(sum < min)
            min = sum;
        if(sum > max)
            max = sum;
    }
    cout << min <<" "<<max;
    
    return 0;
}
