#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pos=0,neg=0,zero=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i=0 ;arr_i < n ;arr_i++)
        {
        if(arr[arr_i]>0)
            pos++;
        else if (arr[arr_i]==0)
            zero++;
        else
            neg++;
    }
    printf("%f\n%f\n%f", float(pos/n),float(neg/n), float(zero/n));
    return 0;
}
