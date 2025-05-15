#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a>>b>>c;
    int max,smax,low;
    if(a>b){
        max=a;
        smax=b;

    }
    else{
        max=b;
        smax=a;

    }
    if(c>max){
        low=smax;
        smax=max;
        max=c;
    }
    else if(c>smax){
        smax=low;
        smax=c;
    }
    else{
        low=c;
    }

    cout<<"numbers after sorting :"<<endl;
    cout<<low<<" "<<smax<<" "<<max<<endl;
    return 0;
}
