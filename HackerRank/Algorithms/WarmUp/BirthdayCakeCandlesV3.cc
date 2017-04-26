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
int main()
    {	  
    int count = 0, n , max = 0;
    cin.ignore();
    while(cin>>n)
        max < n ? count = !!(max = n) : count+= (max==n);
    cout << count;
    return 0;

}
