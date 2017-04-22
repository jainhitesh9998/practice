#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n;i++)
        {
        int a =i;
        for(int j =i+1;j<n;j++)
            {
            cout<<" ";
        }
        for(int k=0;k<=a;k++)
            {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
