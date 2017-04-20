#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int dd1, dd2, mm1, mm2, yy1, yy2;
    int fine;
    cin>>dd1>>mm1>>yy1>>dd2>>mm2>>yy2;
    if(yy1<yy2)
        fine = 0;
    else if(yy1 == yy2){
        if(mm1 < mm2)
            fine = 0;
        else if(mm1 == mm2){
            
            if(dd1 <= dd2){
                fine = 0;
            }
            else{
                fine = abs(dd1-dd2)*15;
            }
        }
        else{
            fine = abs(mm1-mm2)*500;
        }
    }
    else{
        fine = 10000;
    }
    cout<<fine;
    return 0;
}
