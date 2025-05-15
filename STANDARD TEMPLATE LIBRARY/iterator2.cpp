#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<pair<int , int>> vp={{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int, int>> :: iterator it=vp.begin();
    for(it=vp.begin() ; it!=vp.end() ; it++){
        cout<<(*it).first <<" "<<(*it).second<<endl;// instead use it->first // ans it->second more understable 
    }
    cout<<endl;
    for(pair<int , int> &value : vp){
        cout<<value.first<<value.second<<" ";
    }
    cout<<endl;
    auto a=1;
    cout<<a<<endl;
    return 0;
}
