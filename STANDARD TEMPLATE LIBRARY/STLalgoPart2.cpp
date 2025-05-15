#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<[](int x ,int y){return x+y;}(2,6)<<endl;//lambda function
    auto sum=[](int x ,int y){return x+y;};//lambda function
    cout<<sum(8,4)<<endl;
    vector<int> v={3,5,6};
    cout<<all_of(v.begin() , v.end() , [](int x){return x>0;});//return true or false (0/1)
   //similiarly we have none_of and any_of the name are enogh to tell what he purpose of these stl are
   return 0;
} 