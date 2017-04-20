#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	    
    
    // Declare second integer, double, and String variables.
    int second;
    double s2;
    string s3;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>second>>s2;
    getline(cin >> ws, s3);
    // Print the sum of both integer variables on a new line.
    cout << i + second <<endl;
    // Print the sum of the double variables on a new line.
    cout <<fixed<<setprecision(1)<< d+s2<<endl;
    cout << s + s3;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    return 0;
}