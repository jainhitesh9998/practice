#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int no;
    
    cin >>no;
    for (int j = 0; j < no; j++)
        {
    string in1 = "";
        
    string even = "", odd = "";
        cin >> in1;
        //cout << j<<endl;
    for (int i =0; i<in1.size(); i++)
        {
        
        if(i % 2 == 0)
            even += in1[i];
        else
            odd += in1[i];
    }
    cout << even <<" "<<odd<<endl;
    
    }
    return 0;
}
