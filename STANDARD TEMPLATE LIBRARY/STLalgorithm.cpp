#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min=*min_element(v.begin() , v.end());//this gives the pointer using star we access the element
    int max=*max_element(v.begin() , v.end());//similiar as above gives max element 
    cout<<min<<endl;
    cout<<max<<endl;

    int sum=accumulate(v.begin() , v.end() , 0);//pointer of starting and pointer of end and initial sum 
    cout<<sum<<endl;
    int ct=count(v.begin() , v.end() , 3);//gives the count of the element 
    cout<<ct<<endl;
    int element=*find(v.begin() , v.end() , 2);
    cout<<element<<endl;// using pointer 
    //now using iterator 
    auto it = find(v.begin(),v.end(),3);
    if(it!=v.end()){
        cout<<"element is found"<<*it<<endl;
    }
    else{
        cout<<"element is not found "<<endl;
    }
    reverse(v.begin() , v.end())//use to reverse the vector

    return 0;
}

