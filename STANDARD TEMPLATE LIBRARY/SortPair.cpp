#include<bits/stdc++.h>
using namespace std;
bool should_i_swap( int a, int b){   // sort defining function 
    if(a<b){      // defining the typ eof sorting ....
        return true;
    }
    return false;
    
}
bool should_i_swap(pair<int , int> a, pair<int ,int> b){   // sort defining function for pair
      if(a.first!=b.first){
        if(a>b){
            return true;
        }
        return false;
      }
      
    else{
        if(a.second > b.second){
            return true;
        }
        return false;
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<pair<int , int>> vec(n);
    for(int i=0 ; i<n ; i++){
          cin>>vec[i].first>>vec[i].second;
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
           if (should_i_swap(vec[i] , vec[j])){
                swap(vec[i] , vec[j]);
            }
        }
    }
    cout<<"output is"<<endl;
     for(int i=0 ; i<n ; i++){
          cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }
    cout<<endl;

    
    return 0;

}


