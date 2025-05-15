#include<bits/stdc++.h>
void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);// similiar to pushback but faster 

    vector<pair<int , int>>vec;
    v.push({1,2});
    v.emplace_back(1,2);//in emplace back no curly braces are needed ...

    vector<int> v(5,100);
    vector<int> v(5);
 
    vector<int> v1(5,20);
    vector<int> v2(v1);
     //ITERATOR
     vector<int>::iterator it = v.begin();
     it++;
     cout<<*(it)<<" ";

     it=it+2;
     cout<<*(it)<<" ";

     it=it+2;
     cout<<*(it<<" ";
      )
}
using namespace std; 
int main(){


    return 0;
}