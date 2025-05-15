#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int , string> m;
    m[1]="babbar";
    m[13]="love";
    m[2]="kumar";
    m.insert({5,"bheem"});// used fr inserting 


    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;


    }
    m.erase(13);// used for erasing 

}
