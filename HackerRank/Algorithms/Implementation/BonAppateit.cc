#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, share, amount = 0;

    cin>>n>>k;
        vector <int> cost(n);
    for (int i = 0; i<n; i++)
        cin>>cost[i];
    cin>>share;
    for (int i = 0; i<n; i++){
        if(i != k)
            amount+=cost[i];       
    }
    
    if(amount / 2 == share)
        cout<<"Bon Appetit";
    else
        cout<<cost[k]/2;
    return 0;
}
