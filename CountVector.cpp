#include<iostream>
#include<vector>// count the number of occurance of a given x in a vector 
using namespace std;
int main(int argc, char const *argv[])
{   vector<int> v(5);

    cout<<"enter the elements in a vetor"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"the given vector is"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<" ";

    }
    cout<<endl;
    int count=0;
    int x;
    cout<<"enter x :"<<endl;
    cin>>x;
    for(int j=0 ; j<v.size();j++){
        if(x==v[j]){
         count++;
        }
    }
   cout<<"the value of count for x is :"<<count<<endl;

 
    return 0;   
}            