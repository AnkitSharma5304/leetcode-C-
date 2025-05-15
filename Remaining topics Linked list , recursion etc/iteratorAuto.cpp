#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<pair<int , int>> vp={{1,2},{2,3},{3,4},{4,5}};
   
    for(auto it = vp.begin() ; it!=vp.end() ; it++){// using auto makes code easy to view and reduces declaration of variables 
        cout<<(*it).first <<" "<<(*it).second<<endl;// instead use it->first // ans it->second more understable 
    }
    cout<<endl;
    for(auto &value : vp){
        cout<<value.first<<value.second<<" ";
    }
    cout<<endl;
    auto a=1;
    cout<<a<<endl;
    return 0;
}
