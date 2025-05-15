// no. of ways to reach top of a stair if only either one step or 2 step movement is possible 
#include<iostream>
using namespace std;

    
int main(int argc, char const *argv[])
{       int n;
        cout<<"enter no. of stairs"<<endl;
        cin>>n;
       int climbstairs(int n){
        if(n==1 || n==0){
            cout<<"1 step";}
        
        return climbstairs(n-1)+climbstairs(n-2);
       }

    return 0;
}
