#include<bits/stdc++.h>
using namespace std;
int main(){
queue<string> q;
q.push("lkj");
q.push("yui");
q.push("ert");
q.push("cvf");
q.push("abc");
 
 while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
 }

    return 0;
}