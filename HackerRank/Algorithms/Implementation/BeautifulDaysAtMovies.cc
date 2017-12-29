#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int rev_no(int a){
    int temp = 0;
    while(a > 0){
        temp *=10;
        temp+=a%10;
        a/=10;
    }
    return temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,count = 0;
    cin>>i>>j>>k;
    for(i; i<=j;i++){
        if(abs(i - rev_no(i))%k == 0)
            count++;
    }
    cout<<count;
    return 0;
}

