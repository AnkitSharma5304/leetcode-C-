#include<iostream>//print the values between 1 and 50 except the mutiples of three
using namespace std;
int main(int argc, char const *argv[])
{
   for (int i=1 ; i<=50;i++){
   if(i%3==0)
   continue;//use of continue statement ... 
   else
   cout<<i<<endl; 
   }
    
    return 0;
}
