#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int, string> m;
    m[1]="abc";
    m[5]="cde";
    m[3]="ght";
    m.insert({4,"tyu"});
    // map<int , string> ::iterator it;
    //  for(it=m.begin() ; it!=m.end() ; it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    //  }
    for(auto &it:m){
     cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
