#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    //vector<int> a(n);
    map <int, int> a ;
    for (int i = 1 ;i<= 5 ; i++)
        a[i] = 0;
    int temp;
    for(int types_i = 0; types_i < n; types_i++){
       cin >> temp;
        a[temp]++; //= a[temp]+1;
    }
    // your code goes here
    int max  = INT_MIN, index = INT_MIN;
    for (int i = 1; i<=5; i++){
        if(a[i] > max){
            index = i;
            max = a[i];
        }
              
    }
    cout<<index;
    
    
    return 0;
}
