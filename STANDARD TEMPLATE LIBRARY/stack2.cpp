#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s; // it can be float , char , or any data structure 
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}


    return 0;
}