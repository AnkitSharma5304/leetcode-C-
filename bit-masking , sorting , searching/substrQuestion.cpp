// find the occurance of the substring
// #include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    string t;
    cin>>s>>t;
    int x=s.size();
    int y=t.size();
    for(int i=0 ; i<=y-x+1 ; i++){
        if(t.substr(i,x)==s){
            cout<<"found t index"<<i<<endl;
        }
       
    }

    return 0;
}
