#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long size;
    map <string, long> phoneNo;
    map <string, long>::iterator phone;
    cin >> size;
    for (int i = 0; i < size; i++)
        {
            int phone;
              string name;
            cin >> name>>phone;
            phoneNo.insert(pair<string, long>(name, phone));
    }
    
    for (int i = 0; i< 999999; i++)
        {
            string name;
            cin >> name;
            phone = phoneNo.find(name);
            if  (name.empty())
                break;
            if(phone != phoneNo.end())
                {
                cout<<name<<"="<<phone->second<<endl;
                
                
}
        else
            {
            cout<<"Not found"<<endl;
            
        }
        }
    return 0;
}
