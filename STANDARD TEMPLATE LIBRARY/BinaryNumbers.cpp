#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cout<<INT_MAX<<endl;
    int a =(1ll<<31) - 1;// 1<<x is 2 raise to the power x 
    ll b = (1<<31)-1; /// this is a signed int 
    cout<<a<<endl;
    cout<<b<<endl;
    unsigned int k = (1ll<<32) - 1; // this is a unsigned int 
    cout<<k<<endl;
    return 0;
}