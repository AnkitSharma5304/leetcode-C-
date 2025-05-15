#include<bits/stdc++.h>
#define M 1000000007;// 1e9+7 is not valid as these are floating point numbers 
#define m 100;// this also same 
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;
    cout<<"printing modulo of x"<<endl;
    int y=x%M;
    int z=x%m;
    cout<<y<<endl<<z<<endl;

    return 0;
}
