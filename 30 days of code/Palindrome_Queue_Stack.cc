#include <iostream>
#include <vector>

using namespace std;

class Solution {
    private:
    char return_val;
    vector <char> stack, queue;
    
    public:
    void pushCharacter(char ch)
    {
        stack.push_back(ch);
            
    }
    void enqueueCharacter(char ch) {
        queue.insert(queue.begin(),ch);
    }
    char popCharacter(){
        return_val = queue.back();
        queue.pop_back();
        return return_val;
    }
    char dequeueCharacter() {
        return_val = stack.back();
        stack.pop_back();
        return return_val;
    }
    //Write your code here

};
