#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int valley = 0, sea_level = 0;
    bool flag = false;
    char ch;
    for (int i = 0; i<n; i++){
        cin>>ch;
        if(ch == 'U')
            sea_level++;
        else{
            if(sea_level == 0)
                flag = false;
            sea_level--;
        }
        if(sea_level < 0 && flag == false){
            valley++;
            flag = true;
        }
    }
    cout<<valley;
    return 0;
}
