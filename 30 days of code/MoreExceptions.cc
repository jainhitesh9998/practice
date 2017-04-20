#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class myException : public exception
    {
    virtual const char* what() const throw()
        {
        return "n and p should be non-negative";
    }
} myEx;
class Calculator{
  public:
    int power(int a, int b) //throw ()
        {
        
        if(a < 0 || b < 0)
            throw myEx;
        return pow(a,b);
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}