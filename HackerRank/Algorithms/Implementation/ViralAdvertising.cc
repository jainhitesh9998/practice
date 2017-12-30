#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> data;

void liked(int days){
    if(days > 0 && data.empty())
    {
        data.push_back(floor(5/2));
        
        liked(days-1);
    }else if(days > 0){
        data.push_back(floor(data.back() * 3 / 2));
        //cout<<floor(data.back() * 3 / 2);
        liked(days-1);
    }
    return;
        
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int days;
    cin >> days;
    liked(days);
    int sum = 0;
    for (vector<int>::iterator i = data.begin(); i != data.end(); i++)
        
        sum+=*i;
    cout<<sum;
    return 0;
}

