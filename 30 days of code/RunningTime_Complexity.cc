#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    bool isPrime(int a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin>>n;
    for (int j=0;j<n;j++)
        {
        cin>>k;
        if(isPrime(k))
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }
    return 0;
}

bool isPrime(int a)
    {
    if(a == 1)
        return false;
    for(int i = 2; i<=sqrt(a); i++)
        if(a % i == 0)
            return false;
    return true;       
}
