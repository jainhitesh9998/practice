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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    int sum, max = INT_MIN;
    for (int i = 0; i < 4; i++)
        {
        for (int j = 0; j<4;j++){
            sum = 0;
            for (int k = j; k <= j+2; k++)
                {
                sum  = sum + arr[i][k] + arr[i+2][k];
            }
            sum += arr[i+1][j+1];
            //cout<<sum<<" ";
            if(sum > max)
                max = sum;
            sum = 0;
        }
    }
    cout<<max;
    return 0;
}
