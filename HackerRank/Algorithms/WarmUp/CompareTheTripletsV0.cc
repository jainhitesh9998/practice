#include <bits/stdc++.h>

using namespace std;

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    // Write Your Code Here
    int alice = 0, bob = 0;
    if(a0 != b0)
        a0 > b0 ? alice++ : bob ++;
    if(a1 != b1)
        a1 > b1 ? alice++ : bob++;
    if(a2 != b2)
        a2 > b2 ? alice++ : bob++;
    cout<<alice<<" "<<bob<<endl;
    return 0;
}