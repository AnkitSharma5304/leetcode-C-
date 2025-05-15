#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10; i>=0 ; --i){
        cout<<((num>>i)&1);

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
    //   printBinary(i);
        if((i&1)==0){//remember to put brackets 
            cout<<i<<"is even"<<endl;
        }
        else{
            cout<<i<<"is odd"<<endl;
        }
    }

    return 0;
}