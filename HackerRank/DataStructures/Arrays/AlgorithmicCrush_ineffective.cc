#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
		ifstream read("./input04.txt");
    read >>n>>m;
    vector<long> arr(n, 0);
    
    for (int i = 0; i<m; i++){
        int a, b, v;

        read>>a>>b>>v;
        for (a; a<=b; a++){
            arr[a-1]+=v;
        }
    }
    cout<<*max_element(arr.begin(), arr.end());
    return 0;
    
	
}
