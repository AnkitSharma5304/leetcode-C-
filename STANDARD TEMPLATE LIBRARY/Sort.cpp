#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a , int b){   // sort defining function 
    if(a>b){      // defining the typ eof sorting ....
        return true;
    }
    return false;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0 ; i<n ; i++){
          cin>>vec[i];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
           if (should_i_swap(vec[i] , vec[j])){
                swap(vec[i] , vec[j]);
            }
        }
    }
     for(int i=0 ; i<n ; i++){
          cout<<vec[i]<<' ';
    }
    cout<<endl;

    
    return 0;

}

