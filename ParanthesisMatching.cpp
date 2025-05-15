#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{   string s={"[","{","(",")","}","]"};
    stack <char> st;
    for(int i=0 ; i<6 ; i++){
        if(s[i]=="(" || s[i]=="{" || s[i]=="["){
            st.push(s[i]);
        }
        else if(st.empty()){
            return 0;
        }
        char c = st.top() ; st.pop();
        if((s[i]=="(" && c==")") ||( s[i]=="{" && c == "}") || (s[i] == "[" && c=="]")){
            return 1;
        }
        else {
            return 0;
        }

    }

    if(st.empty()){
        cout<<"true"<<endl;

    }
    else {
        cout<<"false"<<endl;
    }

     
    return 0;
}
