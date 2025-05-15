#include<iostream>
#include<vector> // count the number of elements strictly greater than value of x 
using namespace std;
int main(int argc, char const *argv[])
{   vector<int> v(5);
    cout<<"enter elements of vector"<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];

    }
    cout<<"the vector are:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<" ";
    }
    cout<<endl;
    cout<<"enter x";
    int x, count=0;
    cin>>x;
    for(int j=0; j<v.size();j++){
        if(v[j]>x){
            count++;

        }
    }
    cout<<"the number of elements strictly greater than x are "<<count<<endl;


    return 0;
}
