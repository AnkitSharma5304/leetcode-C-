#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter no. of rows"<<endl;
    cin>>n;
  //  cout<<"enter no. of columns"<<endl;
    //cin>>m;
    for(int i=1; i<=n;i++){
        for(int j=1 ; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}
