#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void explainpair(){
    pair<int,int> p={1,4};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int , int>> p1={1,{3,6}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;

    pair<int , int> arr[]={{1,2} , {3,5}, {6,8}};
    cout<<arr[1].second<<endl;
}
int main(int argc, char const *argv[])
{
    
    explainpair();
    return 0;
}
