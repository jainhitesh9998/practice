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
    int n, r = 0;
    cin >> n ;
    list <int> binary;
    while(n>0)
            {
        r = n % 2;
        n /= 2;
        binary.push_back(r);
    }
    int count = 0;
    int maxCount = 0;
    binary.reverse();
    list<int> ::iterator iter = binary.begin();
    for (iter; iter!= binary.end(); iter++)
        {
        //cout<<*iter<<" ";
        if(*iter == 1)
            count++;
        else
            count = 0;
        if(count>maxCount)
            maxCount = count;
    }
    cout<<maxCount;
    return 0;
}
