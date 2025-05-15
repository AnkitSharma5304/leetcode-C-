#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v={1,2,3,4,5,6};
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";

    }
    cout<<'\n';
    vector<int> :: iterator it=v.begin();

    for(it=v.begin() ; it!=v.end() ; it++){
        cout<<(*(it))<<" ";
    }
    cout<<endl;
    for(int value: v){
        cout<<value<<" ";
    }
    return 0;
}
