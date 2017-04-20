#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long factorial(int n);
    int n;
    cin>>n;
    cout<<factorial(n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


long factorial(int n)
    {
    if(n == 0 || n == 1)
        return 1;
    return n*factorial(n-1);
}