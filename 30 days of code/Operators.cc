#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float mealCost;
    int tip, tax;
    float totalCost;
    cin>>mealCost>>tip>>tax;
    totalCost = mealCost  + (mealCost * (tip + tax)) / 100.0;
    cout << "The total meal cost is "<<round( totalCost)<<" dollars.";
    return 0;
}
