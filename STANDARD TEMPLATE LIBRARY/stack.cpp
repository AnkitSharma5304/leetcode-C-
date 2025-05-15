#include<bits/stdc++.h>
using namespace std;
void learnstack(){
    stack<int> st;
    st.push(1);//1
    st.push(2);//1 2
    st.push(3);// 1 2 3
    st.push(4);// 1 2 3 3
    st.emplace(5);// 1 2 3 3 5
    cout<<st.top();//5
    st.pop();// 1 2 3 3
    cout<<st.top();
    cout<<st.size();

}
int main(int argc, char const *argv[])
{
    
    return 0;
}
